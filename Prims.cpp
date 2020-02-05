/*
  "I knew I shouldn't have gotten out of bed today."
   - Squidward Tentacles
*/

//Djikstra works as long as edge is non negative
//uses a heap, very similar to prims

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

    
    set<pair<int,int>> y;   //maintain a heap
    vector<vector<pair<int,int>>> x(n+1); //edges in the graph
    vector<int> parent(n+1);    //parent of each node
    vector<pair<int,int>> ie;   //pair of edges in result
    vector<int> dis(n+1);   //distance of each node

    for (int i = 0; i < m; i++)
    {
        cin>>u>>v>>w;
        x[u].pb({v,w});
        x[v].pb({u,w});
    }   

    y.insert({0,1});
    parent[1]=-1;

    dis[1]=0;
    for (int i = 2; i < n+1; i++)
    {
        dis[i]=INT_MAX;
    }
    

    y.insert({0,1});
    for (int i = 2; i < n+1; i++)
    {   
        y.insert({INT_MAX,i});
    }

    cout<<"\nOrder of extraction:\n";

    while (y.size())
    {
        pair<int,int> temp=*y.begin();
        cout<<temp.ss<<"\n";
        if (parent[temp.ss]!=-1)
        {
            ie.pb({temp.ss,parent[temp.ss]});
        }
        
        y.erase(y.find(temp));
        int node=temp.ss;

        for (int i = 0; i < x[node].size(); i++)
        {
            if(y.find({dis[x[node][i].ff],x[node][i].ff})!=y.end())
            {
                if (dis[x[node][i].ff]>x[node][i].ss)
                {
                    y.erase({dis[x[node][i].ff],x[node][i].ff});
                    dis[x[node][i].ff]=x[node][i].ss;
                    y.insert({dis[x[node][i].ff],x[node][i].ff});
                    parent[x[node][i].ff]=node;
                }
                
            }   
        }
    }

    cout<<"\n"<<"Included Edges"<<"\n";

    for (int i = 0; i < ie.size(); i++)
    {
        cout<<ie[i].ff<<" "<<ie[i].ss<<"\n";
    }
        

}


/*
9 14
1 2 4
1 8 8
2 8 11
2 3 8
8 9 7
8 7 1
3 9 2
9 7 6
7 6
2
3 4 7
3 6 4
4 6 14
4 5 9
5 6 10

Order of extraction:
1
2
3
9
6
7
8
4
5

Included Edges
2 1
3 2
9 3
6 3
7 6
8 7
4 3
5 4
*/