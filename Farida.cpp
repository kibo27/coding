#include<bits/stdc++.h>
using namespace std;
#define maxim 100009
#define ll long long int
ll solve(int n,int x,ll a[],ll dp[])
{
    if(x>=n)
        return 0;
    if(dp[x]!=0)
        return dp[x];

    dp[x]=max( solve(n,x+1,a,dp) , a[x]+solve(n,x+2,a,dp));

    return dp[x];
}
int main()
{
    long t;
    scanf("%ld",&t);
    int c=1;
    while(t--)
    {
        int n;

        scanf("%d",&n);

        ll a[n],dp[maxim];

        memset(dp,0,sizeof(dp));
        
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%lld",&a[i]);
        }


        ll res=solve( n, 0, a ,dp);

        printf("Case %d: %lld\n",c,res);
        ++c;
    }

}
