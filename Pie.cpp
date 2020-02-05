#include<bits/stdc++.h>
using namespace std;
#define ll long long int
double low,high;
bool isok(double a[],ll n,ll f,double mid)
{   
    ll x=0;

    for (ll i = 0; i < n; i++)
    {
        x+=a[i]/mid;
    }


    if(x<(f))
    return false;
    else
    return true;
}
int main()
{
    ll t;
    scanf("%lld",&t);

    while (t--)
    {
        ll n,f;
        scanf("%lld %lld",&n,&f);

        ++f;

        double a[n];
        double max=0;
    
        for (ll i = 0; i < n; i++)
        {
            scanf("%lf",&a[i]);

            a[i]=M_PI*a[i]*a[i];

            if(a[i]>max)
            max=a[i];
        }

         low=0;
         high=max;
        double ans=-1;
       
        for(int i=0;i<100;i++)
        {
           double mid=(low+high)/2;

           if(isok(a,n,f,mid))
           {
               low=mid;
               ans=mid;
           }
           else
           {
               high=mid;
           }
        }



        printf("%.4lf\n",ans);


    }
}
