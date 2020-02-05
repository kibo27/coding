#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 100010
ll a[N],b[N];
ll canbuy(ll a[],ll mid,ll n)
{   
    ll t =0;

    for (int i = 0; i < n; i++)
    {
        b[i]=a[i]+(i+1)*mid;   
    }
    
    sort(b,b+n);
    
    for (ll i = 0; i < mid; i++)
    {
        t+=b[i];
    }
    
    return t;

}
int main()
{
    ll n,s;

    scanf("%lld %lld",&n,&s);

    ll a[n];

    for (ll i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }

    ll low=0;
    ll high=n;
    ll ans=-1;
    ll price=0;

    while (low<=high)
    {
        ll mid=(low+high)/2;

        if(canbuy(a,mid,n)<=s)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    
    
    printf("%lld %lld\n",ans,canbuy(a,ans,n));
}