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

int main()
{
    DANGER 
    int n,m,u,v,w;
    cin>>n>>m;

    vector<vector<pair<int,int>>> x(n+1);
    set<pair<int,int>> y;
    vector<int> parent(n+1);
    vector<int> dis(n+1);
    vector<pair<int,int>> ie;

    for (int i = 0; i < m; i++)
    {
        cin>>u>>v>>w;
        x[u].pb({v,w});
        x[v].pb({u,w});
    }
    
    dis[1]=0; //if generalize then take a source node as input and do it or that particular node
    y.insert({0,1});
    parent[1]=-1;

    for (int i = 2; i < n+1; i++)
    {
        dis[i]=INT_MAX;
        y.insert({dis[i],i});
    }
    

    while (y.size())
    {
        pair<int,int> temp=*y.begin();
        if(parent[temp.ss]!=-1)
        {
            ie.pb({temp.ss,parent[temp.ss]});
        }
        y.erase(temp);

        int node=temp.ss;

        for (int i = 0; i < x[node].size(); i++)
        {
            if (y.find({dis[x[node][i].ff],x[node][i].ff})!=y.end())
            {
                if (dis[node]+x[node][i].ss<dis[x[node][i].ff])
                {   
                    y.erase({dis[x[node][i].ff],x[node][i].ff});
                    dis[x[node][i].ff]=dis[node]+x[node][i].ss;
                    y.insert({dis[x[node][i].ff],x[node][i].ff});
                    parent[x[node][i].ff]=node;
                }
            }
        }
    }

    cout<<"\nEdges included\n";

    for (int i = 1; i <parent.size(); i++)
    {
        cout<<i<<" "<<parent[i]<<" "<<dis[i]<<"\n";
    }
       
    
}