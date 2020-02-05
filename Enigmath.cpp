#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;

    scanf("%lld",&t);

    while(t--)
    {   
        ll a,b;

        scanf("%lld %lld",&a,&b);

        ll gd= __gcd(a,b);

        a=a/gd;

        b=b/gd;

        printf("%lld %lld\n",b,a);
        
    }   
}