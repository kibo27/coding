#include<bits/stdc++.h>
using namespace std;
#define ma 6100
int dp[ma][ma];
int solve(char *a,int i,int n,int dp[][6100])
{  
    if(i>=n)
        return 0;
    if(a[i]==a[n])
        dp[i][n]=solve(a,i+1,n-1,dp);
    if(a[i]!=a[n])
        dp[i][n]=1+(min(solve(a,i,n-1,dp),solve(a,i+1,n,dp)));
    
    return dp[i][n];
}
int main()
{
    long t;

    scanf("%ld",&t);

    while(t--)
    {
        char a[6100];

        scanf("%s",a);
        
        memset(dp, -1, sizeof(dp));

        printf("%d\n",solve(a,0,strlen(a)-1,dp));
    }
   
}

/*Else use the formula length(string)-lcs(string,rev(string))*/