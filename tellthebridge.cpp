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

void dfs(vector<vector<int>> &val,vector<int> &disc,vector<int> &low,vector<int> &visited,vector<int> parent,vector<pair<int,int>> &bridge,int s)
{  static int time=0;
   visited[s]=0;
   low[s]=disc[s]=time++;

   for (int i = 0; i <val[s].size(); i++)
   {  
      
      if(visited[val[s][i]])
      {  
         parent[val[s][i]]=s;

         dfs(val,disc,low,visited,parent,bridge,val[s][i]);

         low[s]=min(low[s],low[val[s][i]]);

         if(disc[s]<low[val[s][i]])
         bridge.pb({s,val[s][i]});

      }
      else if (val[s][i]!=parent[s])
      {
         low[s]=min(low[s],disc[val[s][i]]);
      }
      
   }
   
}  
int main()
{
   //check for the bridges
   DANGER 
   int n,m,u,v;
   cin>>n>>m;
   vector<vector<int>> val(n+1);
   vector<int> disc(n+1);
   vector<int> low(n+1);
   vector<pair<int,int>> bridge;
   vector<int> parent(n+1,-1);

   for (int i = 0; i < m; i++)
   {
      cin>>u>>v;
      val[u].pb(v);
      val[v].pb(u);
   }
   
   vector<int> visited(n+1,1);

   dfs(val,disc,low,visited,parent,bridge,1);  

   cout<<"\nThe bridge in the graph are:\n";

   for (int i = 0; i < bridge.size(); i++)
   {
      cout<<bridge[i].ff<<"  "<<bridge[i].ss<<"\n";  
   }
   
}