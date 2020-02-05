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
void dfs(vector<vector<int>> &x,vector<int> &visited,int m,int n,int &flag)
{
   visited[m]=0;

   if(m==n)
   flag=1;
   
   for (int i = 0; i < x[m].size(); i++)
   {
      if (visited[x[m][i]])
      {
        dfs(x,visited,x[m][i],n,flag);
      }
   }
   
}
int main()
{
   DANGER
   int q;
   cin>>q;
   vector<pair<int,int>> x;
   vector<vector<int>> val(100);
   x.pb({0,0});
   while (q--)
   {
      long o,m,n;
      cin>>o>>m>>n;
      if(o==1)
      {
         x.pb({m,n});
         for (int i = 1; i < x.size(); i++)
         {
           if(x[i].ff<m && x[i].ss>m || x[i].ff<n && x[i].ss>n)
           {
              val[x.size()-1].pb(i);
           }

           if (m<x[i].ff && n>x[i].ff || m<x[i].ss && n>x[i].ss )
           {
              val[i].pb(x.size()-1);
           }
           
         }
         
      }
      else
      {
         vector<int> visited(x.size(),1);
         int flag=0;
         dfs(val,visited,m,n,flag);
         if(flag)
         cout<<"YES\n";
         else
         {
            cout<<"NO\n";
         }
         
      }
      

   }
    
}