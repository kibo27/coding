//Dfs iterative is implmented using a stack
/*
void Dfs(G,s)
{
    stack<int> st;
    vector<int> visietd(G.size(),1);
    st.push(s);
    visited(s)=0;

    while(!st.empty())
    {
        int ele=st.pop();
        st.pop();

        for(int i=0;i<G[ele].size();i++)
        {
            if(visited[x[ele][i]])
            {
                st.push(x[ele][i]);
                visited[x[ele][i]]=0;
            }
        }
    }
}
*/

//Dfs recursive is rather straight forward
/*
Dfs-rec(G,s)
{
    visited[s]=0;

    for all neighbours w of in G
        if w is not visited:
            Dfs-rec(G,w)
}
*/



//count the no of components in a graph
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define mem(x,y) memset(x,y,sizeof(x))
#define Boost std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void Dfs(vector<vector<int>> &x,int s,vector<int> &visited)
{
    visited[s]=0;
    for (int i = 0; i < x[s].size(); i++)
    {
        if(visited[x[s][i]])
        {
            visited[x[s][i]]=0;
            Dfs(x,x[s][i],visited);   
        }
    }
        
}
int main()
{
Boost;
int n,m,u,v;
cin>>n>>m;
vector<vector<int>> x(n+1);
for (int i = 0; i < m; i++)
{
    /* code */
    cin>>u>>v;
    x[u].pb(v);
    x[v].pb(u);
}

int noofcom=0;
vector<int> visited(n,1);

for (int i = 1; i <=n; i++)
{
    if(visited[i])
    {   
        noofcom++;
        Dfs(x,i,visited);
    }
}

cout<<noofcom<<"\n";
}