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
stack <int> st;
void Dfs(vector<vector<int>> &x,vector<int> &visited,int s)
{
    visited[s]=1;
    
    cout<<"I am at pos::\t"<<s<<"\n";

    for (int i = 0; i <x[s].size(); i++)
    {
        if (!visited[x[s][i]])
        {
            Dfs(x,visited,x[s][i]);    
        }
    }

    st.push(s);
    
}
int main()
{
    DANGER 
    int n,u,v;
    cin>>n;
    vector<vector<int>> x(n+1);

    for (int i = 1; i < n+1; i++)
    {
        cin>>u>>v;
        x[u].pb(v);
    }

    vector<int> visited(n+1,0);

    for (int i = 1; i < n+1; i++)
    {   
        if (!visited[i])
        Dfs(x,visited,i);   
    } 

    vector<int> res;

    while (!st.empty())
    {
        res.pb(st.top());
        st.pop();
    }


    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }


    cout<<"\n";
}

/*
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

stack<int>st;
void Dfs(vector<vector<int>> &x,vector<int> &visited,int s,vector<int> &color)
{
  visited[s]=1;
  int flag=0;
  for (int i = 0; i < x[s].size(); i++)
  {
    if (!visited[x[s][i]])
    {
      color[x[s][i]]=1;
      Dfs(x,visited,x[s][i],color);
    }
    else
    {
      if (color[x[s][i]]==1)
      {
      flag=1;
       break; 
      }
    }
  }
  color[s]=2;
  if(flag==1)
  return;
  else
  st.push(s);
}

int main()
{
    DANGER 
    int n,m,u,v;
    cin>>n>>m;
    vector<vector<int>> x(n+1);
    for (int i = 0; i < m; i++)
    {
      cin>>u>>v;
      x[u].pb(v);
    }

    for (int i = 1; i < n+1; i++)
    {
      if(x[u].size())
      sort(x[u].begin(),x[u].end(),greater<int>());
    }
    

    vector<int> visited(n+1,0);
    vector<int> color(n+1,0);

    for (int i =n; i >= 1; i--)
    {
     if(!visited[i]) 
     {
      color[i]=1;
     Dfs(x,visited,i,color);
     } 
    }

    vector<int> res;

    while(!st.empty())
    {
        res.pb(st.top());
        st.pop();
    }
    
    if(res.size()<n)
    {
      cout<<"Sandro fails\n";
    }
    else
    {for (int i = 0; i < res.size(); i++)
    {
      cout<<res[i]<<" ";
    }

    cout<<"\n";
    }
}
*/