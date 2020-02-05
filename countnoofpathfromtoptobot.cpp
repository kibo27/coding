#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long nofpa(int i,int j,int n,int m,long long int dp[][100])
{
    if(i<0 || j<0 || i>=n || j>=m)
    {
        return 0;
    }
    else if(i==n-1 && j==m-1)
    {
        dp[i][j]=1;
        return dp[i][j];
    }
    else if(dp[i][j])
    {
        return dp[i][j];
    }
    else
    {
        dp[i][j]=(nofpa(i+1,j,n,m,dp)%mod+nofpa(i,j+1,n,m,dp)%mod)%mod;
        return dp[i][j];
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    long long dp[100][100];
    memset(dp,0,sizeof(dp));

    long long int res=nofpa(0,0,n,m,dp);

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