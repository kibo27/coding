/*
  "I knew I shouldn't have gotten out of bed today."
   - Squidward Tentacles
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<LL,LL> p64;
typedef vector<LL> v64;

#define pb           push_back
#define pf           push_front
#define mp           make_pair
#define ff           first
#define ss           second
#define rep(i,s,e)   for(int i=s;i<=e;i++)
#define brep(i,s,e)  for(int i=s;i>=e;i--)
#define mem(x,y)     memset(x,y,sizeof(x))
#define DANGER       std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void bfs(vector<vector<int>> &x,vector<int> &level,vector<int> &visited)
{
  queue<int> q;
  vector<int> indegree(x.size(),0);

  for (int i = 0; i < x.size(); i++)
  {
    for (int j = 0; j <x[i].size();j++)
    indegree[x[i][j]]++;
  }
  
  for (int i = 0; i < x.size(); i++)
  {
    if (!indegree[i])
    {
     q.push(i);
     visited[i]=1;
    }
  }

  while (!q.empty())
  {
    int temp=q.front();
    q.pop();

    for (int i = 0; i < x[temp].size(); i++)
    {
      if (!visited[x[temp][i]])
      {
        level[x[temp][i]]=level[temp]+1;
        visited[x[temp][i]]=1;
        q.push(x[temp][i]);
      }
    }
    
  }
  
  
  
}
int main()
{
    DANGER 
    int t;
    cin>>t;
    while(t--)
    {
      int n,m,u,v;
      cin>>n>>m;
      vector<vector<int>> x(n);

      for (int i = 0; i < m; i++)
      {
        cin>>u>>v;
        x[v].pb(u);
      }

      vector<int> level(n,1);
      vector<int> visited(n,0);

      bfs(x,level,visited);

      map<int,vector<int>> val;

      for (int i =0; i <level.size(); i++)
      {
        val[level[i]].pb(i);
      }
      
      cout<<"map\n";

      for (auto i = val.begin(); i != val.end(); i++)
      {
        for (int j = 0; j <i->ss.size(); j++)
        {
          cout<<i->ff<<" "<<i->ss[j]<<"\n";
        }
      }
      

    }
}

/* for (int i = 0; i < n; i++)
    {
      if (x[i]%k==0)
      {
        continue;
      }
      else if(val<(k-x[i]%k))
      {
        val+=x[i]%k;
      }
      else
      { 
        int temp=val;
        flag=0;
        for (int j = i; j <n; j++)
        {
          if (x[j]%k!=0)
          {
            temp=temp-(k-x[j]%k); 
          }
          if (temp<0)
          {
            flag=1;
            break; 
          }
        }

        if (flag==1)
        {
          val+=x[i]%k;
        }
        else
        { 
          val=temp;
          break;
        }
      }

     // cout<<val<<" ";

    }
    //cout<<"\n";
    cout<<val<<"\n";
  }*/