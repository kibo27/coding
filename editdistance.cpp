#include<bits/stdc++.h>
using namespace std;
int mincov(string x,string y,int m,int n)
{   
    if(m<0 || n<0)
    {   
        if(m<0 && n>0)
        return n;
        if(n<0 && m>0)
        return m;
        else
        return 0;
    }
    else if(x[m]==y[n])
    {
        return mincov(x,y,m-1,n-1);
    }
    else
    {
        return 1+min(mincov(x,y,m-1,n-1),min(mincov(x,y,m-1,n),mincov(x,y,m,n-1)));
    }
    
}
void solve()
{
    int m,n;
    cin>>m>>n;

    string x,y;
    cin>>x;
    cin>>y;

    int res=mincov(x,y,m-1,n-1);

    cout<<res<<"\n";
}
int main()
{   
    ios::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}