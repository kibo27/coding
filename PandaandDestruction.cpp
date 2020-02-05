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
    int n,m,u,v;
    cin>>n>>m;
    int ans=0;
    vector<vector<int>> val(n+1);
    vector<int> deg(n+1,0);
    set<pair<int,int>> x;  
    for (int i = 0; i < m; i++)
    {
        cin>>u>>v;
        val[u].pb(v);
        val[v].pb(u);   
        deg[u]++;
        deg[v]++;
    }

    for (int i = 1; i < n+1; i++)
    {
        if (deg[i]!=0)
        {
           x.insert({deg[i],i});
        }
    }

    while (!x.empty())
    {
        pair<int,int> temp=*x.rbegin();
        x.erase(x.find(temp));
        int node=temp.ss;
        int size=val[node].size();
        ans++;

        for (int i = 0; i < size; i++)
        {
            int n=val[node][i];

            if (x.find({deg[n],n})!=x.end())
            {
                x.erase({deg[n],n});
                deg[n]--;

                if (deg[n]>0)
                {
                    x.insert({deg[n],n});
                }
                
            }
            
        }
        
    }


   cout<<ans<<"\n";
    
    
}