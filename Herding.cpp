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
vector<vector<vector<pair<int,int>>>> x(1000,vector<vector<pair<int,int>>>(1000));
void dfs(vector<vector<vector<pair<int,int>>>> &x,vector<vector<int>> &visited,int i,int j)
{
    visited[i][j]=1;
    
    for (int k = 0; k < x[i][j].size(); k++)
    {
    if (!visited[x[i][j][k].ff][x[i][j][k].ss])
    {
        dfs(x,visited,x[i][j][k].ff,x[i][j][k].ss);
    }
    }
}
int main()
{
    DANGER 
    int n,m;
    cin>>n>>m;
    string s;

    for (int i = 0; i < n; i++)
    {   
        cin>>s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j]=='N')
            {
               x[i][j].pb({i-1,j});
               x[i-1][j].pb({i,j});
            }
            else if (s[j]=='S')
            {
               x[i][j].pb({i+1,j});
               x[i+1][j].pb({i,j});
            }
            else if (s[j]=='E')
            {
               x[i][j].pb({i,j+1});
               x[i][j+1].pb({i,j});
            }
            else
            {
               x[i][j].pb({i,j-1});
               x[i][j-1].pb({i,j});
            }
        }
    }
    
    vector<vector<int>> visited(n,vector<int>(1000));

    int ct=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!visited[i][j])
            {   
                ct++;
                dfs(x,visited,i,j);   
            }
        }
    }
    

    cout<<ct<<"\n";
}