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
vector<int> id(10001);
LL res=0;
void intitalize()
{
    for (int i = 0; i < id.size(); i++)
    {
        id[i]=i;
    }
    
}
int root(int x)
{
    while (id[x]!=x)
    {
        x=id[x];
    }
    
    return x;
}
void unio(int x,int y)
{
    int p=root(x);
    int q=root(y); 
    id[p]=q;
}
void krushkal(multimap <int,pair<int,int>> &x)
{
    intitalize();

    for (auto i = x.begin(); i != x.end(); i++)
    {   
        int a=i->second.first;
        int b=i->second.second;
        if (root(a)!=root(b))
        {
            unio(a,b);
            res+=i->first;
        }
        
    }
    
}
int main()
{
    DANGER 
    int n,m,a,b,w;
    multimap<int,pair<int,int>>x;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b>>w;
        x.insert({w,{a,b}});
    }
    
  
    krushkal(x);

    cout<<res<<"\n";
    
}