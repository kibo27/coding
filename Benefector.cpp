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
 vector<LL> visited(50001,0);
 vector<LL> level(50001,0);
int res(vector<vector<pair<LL,LL>>> &x,int s)
{

  fill(visited.begin(),visited.end(),0);
  fill(level.begin(),level.end(),0);
  queue<LL> q;
  q.push(s);
  
  while (!q.empty())
  {
    int f=q.front();
    q.pop();
    visited[f]=1;
    
    for (int i = 0; i < x[f].size(); i++)
    {
      if (!visited[x[f][i].ff])
      {
        q.push(x[f][i].ff);
        level[x[f][i].ff]=level[f]+x[f][i].ss;
      }
    }
  }

  auto i=max_element(level.begin(),level.end());
  int dis=i-level.begin();

  //cout<<"Dis "<<dis<<"\n";
  return dis;

}
int main()
{
    DANGER 
    LL t;
    cin>>t;
    while (t--)
    {
      LL n;
      LL a,b,c;
      cin>>n;
      vector<vector<pair<LL,LL>>> x(n+1);
      for (LL i = 0; i < n-1; i++)
      {
        cin>>a>>b>>c;
        x[a].pb({b,c});
        x[b].pb({a,c});
      }
      
      LL re=res(x,1);
      LL ans=res(x,re);
      cout<<level[ans]<<"\n";
    }
}