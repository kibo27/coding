//matrix chain multiplication
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<vector<int>> dp(n,vector<int>(n,0));

    for(int l=2;l<n;l++)
    {

        for(int i=1;i<n-l+1;i++)
        {
            int j=i+l-1;
            dp[i][j]=INT_MAX;
            for(int k=i;k<j;k++)
            {
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+a[i-1]*a[k]*a[j]);
            }
        }

    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }

        cout<<"\n";
    }

    cout<<dp[1][n-1]<<"\n";
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