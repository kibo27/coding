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
void bfs(vector<int> &parent,int u,int v,vector<vector<int>> &val)
{
    queue<int> q;
    q.push(u);
    parent[u]=-1;

    while (!q.empty())
    {
       int top=q.front();
       q.pop(); 

       if(top==v)
       break;

       for (int i = 0; i < val[top].size(); i++)
       {
           if (!parent[val[top][i]])
           {
               parent[val[top][i]]=top;
               q.push(val[top][i]);
           }
       }
    }

}
int dfs(vector<vector<int>> &val,vector<int> &visited,int s)
{
    visited[s]=0;

    int ct=1;

    for (int i = 0; i < val[s].size(); i++)
    {
        if(visited[val[s][i]])
        {
            ct+=dfs(val,visited,val[s][i]);
        }
    }
    
    return ct;
}
int main()
{
   DANGER
   long n,u,v,x,y;
   cin>>n>>u>>v;
   vector<vector<int>> val(n+1);
   vector<int> parent(n+1,0);
   
    for (int i = 0; i < n-1; i++)
    {
        cin>>x>>y;
        val[x].pb(y);
        val[y].pb(x);
    }
    vector<int> parents;
    bfs(parent,u,v,val);
    int c=v;
    while (c!=-1)
    {
     parents.pb(c);
     c=parent[c];   
    }   

   
    vector<int> visited(n+1,1);

    int dum=parents[parents.size()-2];

    vector<int>::iterator i;
    for (i=val[u].begin(); i!=val[u].end(); i++)
    {
        if(*i==dum)
        break;
    }
    
    val[u].erase(i);
    
    int vu=dfs(val,visited,u);

    //cout<<"size of subtree ::"<<vu<<"\n";

    val[u].pb(dum);

    fill(visited.begin(),visited.end(),1);

     dum=parents[1];

    for (i=val[v].begin(); i !=val[v].end(); i++)
    {
        if(*i==dum)
        break;
    }

    val[v].erase(i);
    
    int vv=dfs(val,visited,v);

    //cout<<"size of subtree ::"<<vv<<"\n";

    val[v].pb(dum);

    long long int res=n*(n-1);

    res=res-vu*vv;

    cout<<res<<"\n";
   
}   