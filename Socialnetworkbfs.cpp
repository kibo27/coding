#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define mem(x,y) memset(x,y,sizeof(x))
#define Boost std::ios::sync_with_stdio(false);
int Bfs(vector<vector<int>> &x,int s,int dis)
{
    vector<int> level(x.size());
    vector <int> visited(x.size(),1);

    level[s]=0;
    queue <int> q;
    q.push(s);
    visited[s]=0;
    int noof=0;

    while(!q.empty())
    {
        int ele=q.front();
        q.pop();

        for (int i = 0; i < x[ele].size(); i++)
        {
            if(visited[x[ele][i]])
            {
                level[x[ele][i]]=level[ele]+1;
                if(level[x[ele][i]]==dis)
                {
                    noof++;
                }
                visited[x[ele][i]]=0;
                q.push(x[ele][i]);
            }
        }

         if(level[q.front()]>dis)
         {
                    break;
         }
    }

    return noof;
}
int main()
{
Boost;
int n,e,u,v,m;
cin>>n>>e;
vector<vector<int>> x(n+1);


for (int i = 0; i < e; i++)
{
    cin>>u>>v;

    x[u].pb(v);
    x[v].pb(u);
}
cin>>m;

while (m--)
{
    /* code */
    cin>>u>>v;
    cout<<Bfs(x,u,v)<<"\n";
}
}