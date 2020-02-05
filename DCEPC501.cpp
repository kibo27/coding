#include<bits/stdc++.h>
using namespace std;
#define maxim 100009
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

        long long int p[n+5];    

        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&p[i]);
        }

        long long int dp[maxim];

        memset(dp,0,sizeof(dp));

        p[n]=p[n+1]=p[n+2]=p[n+3]=p[n+4]=0;

        for(int i=n-1;i>=0;--i)
        {
            dp[i]=max(p[i]+dp[i+2],max(p[i]+p[i+1]+dp[i+4],p[i]+p[i+1]+p[i+2]+dp[i+6]));
        }
    
         printf("%lld\n",dp[0]);
    
    }

}