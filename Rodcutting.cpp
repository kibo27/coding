#include<bits/stdc++.h>
using namespace std;
int maxt(int a,int b,int c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
}
int xo(int n,int a[],int dp[])
{
    if(n==0)
    return dp[0]=0;
    else if(n<0)
    {
        return INT_MIN;
    }
    else if(dp[n])
    return dp[n];
    else
    {
    dp[n]=1+maxt(xo(n-a[0],a,dp),xo(n-a[1],a,dp),xo(n-a[2],a,dp));
    return dp[n];
    }
}
void solve()
{
    int n;
    cin>>n;
    int dp[n+1];
    for(int i=0;i<n+1;i++)
    {
        dp[i]=0;
    }
    int a[3];
    cin>>a[0];
    cin>>a[1];
    cin>>a[2];

    sort(a,a+3);

    int res=xo(n,a,dp);
    
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