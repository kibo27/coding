#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
 int t;
 scanf("%d",&t);

 while(t--)
 {
    ll n,m;

    scanf("%lld %lld",&n,&m);

    ll low=0;
    ll high=2e9;
    ll ans=-1;
    while (low<=high)
    {
        ll mid=(low+high)/2;

        if(mid*(mid+1)/2==m)
           { 
               ans=0;
               break;
           }
        else if(mid*(mid+1)/2<m)
            {
                ans=m-mid*(mid+1)/2;
                low=mid+1;
                if(ans<mid+1)
                {
                    break;
                }

            }
        else
            {
                high=mid-1;
            }   
    }

    printf("%lld\n",ans);
    
 }   
}