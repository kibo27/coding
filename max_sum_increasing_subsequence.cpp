#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;

    int a[n];
    int res[n];
    int dp[n];
    int max=INT_MIN;

    memset(res,0,sizeof(res));
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    dp[0]=1;
    res[0]=a[0];

    for(int i=1;i<n;i++)
    {   
        dp[i]=1;
        res[i]=a[i];
        for (int j= 0; j<i; j++)
        {
            if(a[i]>a[j] && dp[j]+1>dp[i])
            {
                dp[i]=dp[j]+1;
                if(res[j]+a[i]>res[i])
                {
                    res[i]=res[j]+a[i];
                }
            }
        }
        
    }

    for(int i=0;i<n;i++)
    {
        if(max<res[i])
        {
            max=res[i];
        }
    }

    cout<<max<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}