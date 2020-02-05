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
int ma;
int dfs(vector<vector<int>> &val,vector<int> &visited,int s)
{
   visited[s]=0;
   int c=1;

   for (int i = 0; i < val[s].size(); i++)
   {
      if(visited[val[s][i]])
      {
         c+=dfs(val,visited,val[s][i]);
      }
   }
   
   if(ma<c)
   {
      ma=c;
   }

  

   return c;
}
int main()
{
   DANGER
   int n,m,u,v;
   cin>>n>>m;
   vector<vector<int>> x(n+1);
   vector<int> visited(n+1,1);

   for (int i = 0; i < m; i++)
   {
      cin>>u>>v;
      x[u].pb(v);
      x[v].pb(u);
   }
    
   int ct=0;


   for (int i = 1; i < n+1; i++)
   {
      if (visited[i])
      {
         dfs(x,visited,i);
         ct++;
      }
      
   }
   


   cout<<ct<<" "<<ma<<"\n";

}