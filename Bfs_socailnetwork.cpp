#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define mem(x,y) memset(x,y,sizeof(x))
#define Boost std::ios::sync_with_stdio(false);
int bfs(int start,int end,vector<vector<int>> &x)
{
    queue<int> q;
    vector<int> level(x.size());
    vector<int> vis(x.size(),1);
    vis[start]=0;
    int res=0;
    int flag=0;
    level[start]=0;
    q.push(start);

    while (!q.empty())
    {
        int v=q.front();
        q.pop();

        for (int i = 0; i <x[v].size(); i++)
        {
            if(vis[x[v][i]])
            {   
                vis[x[v][i]]=0;
                level[x[v][i]]=level[v]+1;
                if(level[x[v][i]]==end)
                {
                res++;
                }
                else if(level[x[v][i]]>end)
                {
                    flag=1;
                    break;
                }
                q.push(x[v][i]);
            }
        }

        if(flag)
        {
            break;
        }
              
    }

    return res;
}
int main()
{
Boost;
//Start
int n,e,u,v,q;
cin>>n>>e;

vector<vector<int>> x(n+1);
for (int i = 0; i <e; i++)
{
   cin>>u>>v;
   x[u].pb(v);
   x[v].pb(u);
}

cin>>q;
while (q--)
{
    cin>>u>>v;
    int res=bfs(u,v,x);
    cout<<res<<"\n";
}
}