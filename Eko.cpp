#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isenough(ll a[],ll mid,ll n,ll m)
{
    ll x=0;

    for (ll i = 0; i < n; i++)
    {
        if(a[i]>mid)
        x+=a[i]-mid;

        if(x>=m)
        {
            return true;
        }
    }

    return false;
}
int main()
{   
    ll n,m;

    scanf("%lld %lld",&n,&m);

    ll a[n];

    ll max=0;

    for (ll i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);

        if(a[i]>max)
        max=a[i];
    }

    ll low =0;
    ll high=max;

    ll ans=-1;

    while (low<=high)
    {
        ll mid=(low+high)/2;

        if(isenough(a,mid,n,m))
        {
            low=mid+1;
            ans=mid;
        }
        else
        {
            high=mid-1;
        }
        
    }
    
    printf("%lld\n",ans);

}
