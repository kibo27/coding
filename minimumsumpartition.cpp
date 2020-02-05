#include<bits/stdc++.h>
using namespace std;
int mindif(int a[],int i,int n,int x,int total,int dp[][2500])
{
    if(i==n)
    {   
        return abs(x-total);
    }
    else if(dp[i][x]!=-1)
    {
        return dp[i][x];
    }
    else
    {
        dp[i][x]=min(mindif(a,i+1,n,x+a[i],total-a[i],dp),mindif(a,i+1,n,x,total,dp));
        return dp[i][x];
    }
}
void solve()
{
    int n;
    cin>>n;
    int total=0;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        total+=a[i];
    }   

    int dp[n][2500];

    memset(dp,-1,sizeof(dp));

    int res=mindif(a,0,n,0,total,dp);

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