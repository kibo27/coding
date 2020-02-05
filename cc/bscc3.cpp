#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        ll k;
        scanf("%lld",&k);

        ll low=0;
        ll high=2e9;
        ll ans=-1;

        while (low<=high)
        {
            ll mid=(low+high)/2;

            if(mid*(mid+1)/2>k)
            {
                ans=mid;
                high=mid-1;   
            }
            else
            {
                low=mid+1;
            }
            
        }



        printf("%lld\n",ans);
        
    }
       
}