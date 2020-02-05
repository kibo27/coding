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
void Bellman_ford(vector<vector<pair<int,int>>> &x,vector<int> &dis,vector <int>&parent)
{
    dis[1]=0;
    parent[1]=-1;

    for (int k = 0; k < dis.size()-1; k++) //relax each edge v-1 times
    {
    for (int i = 1; i <dis.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
           if (dis[i]+x[i][j].ss<dis[x[i][j].ff])
           {
               dis[x[i][j].ff]=dis[i]+x[i][j].ss;
               parent[x[i][j].ff]=i;
           }
        }   
    }
    }
}
int main()
{
    DANGER 
    int n,m,u,v,w;
    cin>>n>>m;
    vector<vector<pair<int,int>>> x(n+1);

    for (int i = 0; i < m; i++)
    {
        cin>>u>>v>>w;
        x[u].pb({v,w});
    }

    vector<int> dis(n+1,INT_MAX);
    vector<int> parent(n+1);

    Bellman_ford(x,dis,parent);

    for (int i = 1; i < n+1; i++)
    {
        cout<<dis[i]<<" "<<parent[i]<<"\n";
    }
}