#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define mem(x,y) memset(x,y,sizeof(x))
#define Boost std::ios::sync_with_stdio(false);
void Bfs(vector<vector<int>> &x,int s,int e)
{
    queue<int> bs;
    vector<int> vis(x.size(),1);
    map<int,int> ma;
    bs.push(s);
    ma[s]=0;
    vis[s]=0;

    while(!bs.empty())
    {
     int vs=bs.front();
     bs.pop();

     for (int i = 0; i < x[vs].size(); i++)
     {  
        if(x[vs][i]) 
        if(vis[i])
        {     
              vis[i]=0;
              ma[i]=vs;
              bs.push(i);  
        }
     } 
    }
    
    stack<int> xo;
    xo.push(e);
    while(ma[e])
    {
        xo.push(ma[e]);
        e=ma[e];
    }
    cout<<xo.size()<<"\n";
    while (!xo.empty())
    {
        cout<<xo.top()<<" ";
        xo.pop();
    }

    cout<<"\n";
}
int main()
{
Boost;
int n,m,t,c,u,v;
cin>>n>>m>>t>>c;
vector<vector<int>> x(n+1,vector<int>(n+1,0));
for (int i = 0; i < m; i++)
{
    cin>>u>>v;
    x[u][v]=1;
    x[v][u]=1;
}
cin>>u>>v;
Bfs(x,u,v);
}