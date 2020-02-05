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
void dfs(vector<vector<int>> &val,vector<int> &visited,int s,int &x,vector<int> &nos)
{
   visited[s]=0;

   for (int i = 0; i <val[s].size(); i++)
   {
      if (visited[val[s][i]])
      {
         dfs(val,visited,val[s][i],x,nos);
      }
        
   }
   
   if(nos[s]>nos[x])
   x=s;
}
int main()
{
   DANGER
   int n,m,u,v;
   long long t=0,s=0;
   cin>>n>>m;

   vector<int> nos(n+1);
   vector<vector<int>> val(n+1);
   vector<int> visited(n+1,1);
   vector<int> burn;

   for (int i = 1; i < n+1; i++)
   {
     cin>>nos[i];
     t+=nos[i];
   }


   for (int i = 0; i < m; i++)
   {
   cin>>u>>v;
   val[u].pb(v);
   val[v].pb(u);  
   }
   

   for (int i = 1; i < n+1; i++)
   {  
      if (visited[i])
      {  int x=i;
         dfs(val,visited,i,x,nos);
         burn.pb(x);
         s+=nos[x];
      }
   }
   
   cout<<s<<" "<<t-s<<"\n";

   for (int i = 0; i < burn.size(); i++)
   {  
      cout<<burn[i]<<" ";
   }
   

}