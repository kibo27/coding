#include<bits/stdc++.h>
using namespace std;
int maxt(int a,int b,int c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
}
int mpa(int a[][20],int i,int j,int n,int dp[][20])
{
    if(i<0 || j<0 || i>=n || j>=n )
    {
        return 0;
    }
    else if(i==n-1)
    {
        return dp[i][j]=a[i][j];
    }
    else if(dp[i][j])
    {
        return dp[i][j];
    }
    else
    {
        return dp[i][j]=a[i][j]+maxt(mpa(a,i+1,j-1,n,dp),mpa(a,i+1,j,n,dp),mpa(a,i+1,j+1,n,dp));
    }
}
void solve()
{
    int n;
    cin>>n;
    int a[20][20];
    int dp[20][20];

    memset(dp,0,sizeof(dp));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    int mx=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        mx=max(mx,mpa(a,0,i,n,dp));
    }

    cout<<mx<<"\n";
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