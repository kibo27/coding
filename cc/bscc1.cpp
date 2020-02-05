#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100001];
ll f[100001];
int main()
{
    ll n,k;

    scanf("%lld %lld",&n,&k);

    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
       
    }

    for (ll i = 0; i < n; i++)
    {
    
        f[a[i]]++;
    }

    ll ans=0;

    for (ll i = 0; i <=k; i++)
    {   
        if(i==k-i)
        {
            ans+=f[i]*(f[k-i]-1);
        }
        else
        {
            ans+=f[i]*f[k-i];
        }
        
    }
        ans=ans/2;
        printf("%lld\n",ans);

}