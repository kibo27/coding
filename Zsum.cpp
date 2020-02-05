#include<bits/stdc++.h>
using namespace std;
#define MOD 10000007
#define ll long long int
ll pw(ll a,ll b)
{   
   
    ll x=1;



    while(b>0)
    {   
        if(b&1)
            x=(x*a)%MOD;

        b=b>>1;
        a=(a*a)%MOD;
    }
    


    return x%MOD;
}
int main()
{
    while(1)
    {   
        ll n,k,ans=0;
        scanf("%lld %lld",&n,&k);

        if(n==0 && k==0)
        {
            break;
        }

        ans=2*(pw(n-1,k)%MOD+pw(n-1,n-1)%MOD)%10000007;
        ans+=(pw(n,k)%MOD+pw(n,n)%MOD)%MOD;

        ans=ans%MOD;

        printf("%lld\n",ans);

    }   
}