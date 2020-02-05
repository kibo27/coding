#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[112][112]={0};
        int dp[112][112]={0};

        int h,w;
        scanf("%d %d",&h,&w);

        int mx=INT_MIN;

        for (int i = 2; i <= h+1; i++)
        {
            for (int j = 2; j <= w+1; j++)
            {
                scanf("%d",&a[i][j]);
                dp[i][j]=max(a[i][j]+dp[i-1][j-1],max(a[i][j]+dp[i-1][j+1],a[i][j]+dp[i-1][j]));
               mx=max(mx,dp[i][j]);
            }
        }
        
        

        printf("%d\n",mx);

    }
}