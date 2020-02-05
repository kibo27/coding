#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int f(ll a[],ll n,ll c,ll x)
{
    ll cowplaced=1;
    ll lastpos=a[0];

    for (ll i = 1; i < n; i++)
    {
        if(a[i]-lastpos>=x)
        {
            if(++cowplaced==c)
            return 1;

            lastpos=a[i];
        }
    }
    return 0;
}
int main()
{
    ll t;
    scanf("%lld",&t);

    while(t--)
    {
        ll n,c;
        scanf("%lld %lld",&n,&c);

        ll a[n];

        for (ll i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }

        sort(a,a+n);

        ll low=0;
        ll high=a[n-1]-a[0];

        while (high-low>1)
        {
            ll mid=(low+high)/2;

            if(f(a,n,c,mid))
            {
                low=mid;
            }
            else
            {
                high=mid;
            }
        }

        printf("%lld\n",low);        
        
    }
 
}