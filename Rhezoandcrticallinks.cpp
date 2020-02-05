/*
Rhezo likes to play with graphs having N nodes and M edges. Lonewolf is ready to give him such a graph only on one condition. He wants Rhezo to find the number of critical links in the graph.

A critical link in a graph is an edge that has the following property: If we cut the link/edge, the graph will have exactly one more connected component than it previously had, and the difference between the number of nodes on each side of the edge is less than a certain integer P.

Given P and the graph, can you help Rhezo calculate the number of critical links?

Input:

First line contains 3 integers N, M and P as described in the problem statement. Each of the next M lines contain 2 integers A and B, meaning that node number A has a link/edge with node number B.
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
int p,cl;
int dfs(vector<vector<int>> &val,vector<int> &disc,vector<int> &low,vector<int> &visited,vector<int> parent,vector<int> &sub,int s)
{  static int time=0;
   visited[s]=0;
   low[s]=disc[s]=time++;
   sub[s]=1;

   for (int i = 0; i <val[s].size(); i++)
   {  
      
      if(visited[val[s][i]])
      {  
         parent[val[s][i]]=s;

         sub[s]+=dfs(val,disc,low,visited,parent,sub,val[s][i]);

         low[s]=min(low[s],low[val[s][i]]);

         if(disc[s]<low[val[s][i]])
         {
               if (abs(sub[s]-sub[val[s][i]])>=p)
               {
                  cl++;
               }
               
         }
      }
      else if (val[s][i]!=parent[s])
      {
         low[s]=min(low[s],disc[val[s][i]]);
      }
      
   }   
   return sub[s];
   
}  
int main()
{
   //check for the bridges
   DANGER 
   int n,m,p,u,v;
   cin>>n>>m>>p;
   vector<vector<int>> val(n+1);
   vector<int> disc(n+1);
   vector<int> low(n+1);
   vector<int> sub(n+1,0);
   vector<int> parent(n+1,-1);

   for (int i = 0; i < m; i++)
   {
      cin>>u>>v;
      val[u].pb(v);
      val[v].pb(u);
   }
   
   vector<int> visited(n+1,1);
   cl=0;
   
   for(int i=1;i<n+1;i++)
   if(visited[i])
   int xf=dfs(val,disc,low,visited,parent,sub,i);  

   cout<<cl<<"\n";
}