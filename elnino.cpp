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
vector<vector<long>> x(200005);
vector<long> a(200005,0);
long long int ans;
void dfs(int s,int dep)
{  
   ans+=a[dep];

   for (int i = 0; i < x[s].size(); i++)
   {
      dfs(x[s][i],dep+1);
   }
   
}
int main()
{
   DANGER 
   long long int n,m,b;
   cin>>n>>m;

   for (int i = 0; i <m; i++)
   {
     cin>>b;
     if(b<=n)
     a[b]++;
   }
   
   for (int i =2; i <=n; i++)
   {
     cin>>b;
     x[b].pb(i);
   }

   for (int i =1; i <=n; i++)
   {
      a[i]+=a[i-1];
   }
   
   dfs(1,0);


   cout<<ans<<"\n";
   
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
void dfs(vector<vector<long>> &val,vector<vector<long>> &child,vector<long> &level,vector<int> &visited,int s)
{
   visited[s]=0;

   for (int i = 0; i <val[s].size(); i++)
   {
      if (visited[val[s][i]])
      {
         level[val[s][i]]=level[s]+1;
         child[s].pb(val[s][i]);
         dfs(val,child,level,visited,val[s][i]);
         child[s].insert(child[s].end(),child[val[s][i]].begin(),child[val[s][i]].end());
      }
      
   }
   
}
int main()
{
   DANGER
   int n,m;
   cin>>n>>m;

  unordered_set <long> a;
   long x;
   vector<long> parent(n);
   vector<vector<long>> val(n+1);
   for (int i = 0; i < m; i++)
   {
    cin>>x;
    a.insert(x);
   }
   
   for (int i = 1; i < n; i++)
   {
      cin>>parent[i];
      val[i+1].pb(parent[i]);
      val[parent[i]].pb(i+1);
   }
   
   vector<vector<long>> child(n+1);
   vector<long> level(n+1);
   vector<int> visited(n+1,1);
   level[1]=0;
   
   dfs(val,child,level,visited,1);

 
   long long int ct=0;

   for (int i = 1; i < n+1; i++)
   {
      for (int j = 0; j < child[i].size(); j++)
      {
         if(a.find(level[child[i][j]]-level[i])!=a.end())
         {
            ct++;
         }  
      }  
   }
   
   cout<<ct<<"\n";

}
*/