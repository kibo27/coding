#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll ,ll> dp;

ll solve(ll n)
{
    if(n==0)
        return 0;

    if(dp[n]!=0)
        return dp[n];

    dp[n]=max(n,solve(n/2)+solve(n/3)+solve(n/4));

    return dp[n];
}
int main()
{   
    ll n;
    while(scanf("%lld",&n)==1)
    {   
        printf("%lld\n",solve(n));
    }
}