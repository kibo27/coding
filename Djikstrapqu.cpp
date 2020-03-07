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
typedef pair<int,int> pi;
#define DANGER       std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
LL djikstra(vector<vector<pair<LL,LL>>> &x,LL u,LL v)
{
    priority_queue<pi,vector<pi>,greater<pi>>pa;//set<pair<LL,LL>> pa;
    vector<LL> dis(x.size());

    for (LL i = 1; i < x.size(); i++)
    {   
        if(i==u)
        {
            dis[u]=0;
        }
        else
        {
            dis[i]=INT_MAX;
        }
    
    }

     pa.push({0,u});

    while (pa.size())
    {
        pair<LL,LL> temp=pa.top();
        pa.pop();
        if (temp.ss==v)
        {
            break;
        }
        
        int node=temp.ss;
        for (int i = 0; i < x[node].size(); i++)
        {
          
               if(dis[node]+x[node][i].ss<dis[x[node][i].ff])
            {
               
                dis[x[node][i].ff]=dis[node]+x[node][i].ss;
                pa.push({dis[x[node][i].ff],x[node][i].ff});
            }
                    }
    }
    
    return dis[v];
}
int main()
{
    DANGER 
    int t;
    cin>>t;
    while(t--)
    {
        LL n;
        cin>>n;
        unordered_map<string,LL> va;
        string c;
        int u,v,w,r;
        vector<vector<pair<LL,LL>>> x(n+1);
        for (int i = 1; i < n+1; i++)
        {
         cin>>c;
         va.insert({c,i});
         cin>>u;
         for (int j = 0; j < u; j++)
         {
            cin>>v>>w;
            x[i].pb({v,w});
         }
        }
        cin>>r;
        while (r--)
        {
            string st,en;
            int a,b;
            cin>>st>>en;
            a=va[st];
            b=va[en];
            cout<<djikstra(x,a,b)<<"\n"; 
        }
        
    }
}