#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define mem(x,y) memset(x,y,sizeof(x))
#define Boost std::ios::sync_with_stdio(false);
int Bfs(vector<vector<int>> &x,int s)
{
    queue<int> q;
    vector<int> visited(x.size(),1);
    vector<int> level(x.size(),0);
    q.push(s);
    level[s]=1;

    while (!q.empty())
    {
        int ele=q.front();
        visited[ele]=0;
        q.pop();

        for (int i = 0; i <x[ele].size(); i++)
        {
            if(visited[x[ele][i]])
            {   
                level[x[ele][i]]=level[ele]+1;
                if(x[ele][i]==x.size()-1)
                return level[ele];   
                q.push(x[ele][i]);
                visited[x[ele][i]]=0;
            }
        }      
    }
    
}
int main()
{
Boost;
int t;
cin>>t;
while (t--)
{
int n,m,a,b;
cin>>n>>m;
vector<vector<int>> x(n+1);
for (int i = 0; i <m; i++)
{   
    cin>>a>>b;
    x[a].pb(b);
    x[b].pb(a);
}
int res=Bfs(x,1);
cout<<res<<"\n";
}
}