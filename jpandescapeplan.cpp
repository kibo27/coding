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
int n,m,flag=0;
vector<vector<long>> h(501,vector<long>(501));
vector<vector<pair<int,int>>> parent(501,vector<pair<int,int>>(501));
pair<int,int> ls;
int dis[4][2]={{0,-1},{-1,0},{1,0},{0,1}};
bool ok(int x,int y)
{
   if(x>m || x<1 || y>n || y<1)
   {
      return false;
   }
   
   return true;
   
}
void dfs(vector<vector<long>> &h,vector<vector<int>> &visited,long &x,long &y,long &j)
{     

   visited[x][y]=0;

   if(x==n || x==1 || y==1 || y==m)
   {
   flag=1;
   ls.ff=x;
   ls.ss=y;
   return ;
   }
   for (int i = 0; i < 4; i++)
   {     
      long dx,dy;
      dx=x+dis[i][0];
      dy=y+dis[i][1];

      if(ok(dx,dy) && visited[dx][dy])
      {
         if(abs(h[x][y]-h[dx][dy])<=j)
         {  
            parent[dx][dy]={x,y};
            dfs(h,visited,dx,dy,j);
            if (flag=1)
            {
               break;
             }
            
         }
      }
   }

}
int main()
{
   DANGER 
   int t;
   cin>>t;
   cin>>n>>m;
   long dx,dy,j;

   vector<vector<int>> visited(n+1,vector<int> (m+1,1));

   for (int i=1; i <=n; i++)
   {
      for (int j=1; j <=m; j++)
      {
         cin>>h[i][j];  
      }
   }
   
   cin>>dx>>dy>>j;

   parent[dx][dy]={-1,-1};
   dfs(h,visited,dx,dy,j);

   if(flag)
   {
   vector<pair<int,int>> way;
   int dis=0;
   
   while (ls.ff!=-1 && ls.ss!=-1)
   {
      way.pb({ls.ff,ls.ss});
      ls=parent[ls.ff][ls.ss];
      dis++;
   }

   
   reverse(way.begin(),way.end());
   cout<<"YES\n";
   cout<<dis<<"\n";
   for (int i = 0; i < way.size(); i++)
   {
     cout<<way[i].ff<<" "<<way[i].ss<<"\n";
   }
   
   }
   else
   {
      cout<<"NO\n";
   }
}