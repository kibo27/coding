#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int x(ll a[],int m,int k,ll mid)
{
    int cnt=1;
    int temp=0;
    for (int i = 0; i < m; i++)
    {   
        if(temp+a[i]>mid)
        {
            temp=a[i];

            cnt++;

            if(cnt>k)
            return 0;
        }
        else    
        {
            temp+=a[i];
        }

    }

    return true;

}
int main()
{
    int N;
    scanf("%d",&N);

    while(N--)
    {
        int m,k;
        scanf("%d",&m);
        scanf("%d",&k);
        ll a[m], sum=0;

        for (int i = 0; i < m; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }




        ll low=(ll)*(max_element(a,a+m));
        ll high=sum;
        ll ans=-1;

        while (low<=high)
        {
            ll mid=(low+high)/2;

            if(x(a,m,k,mid))
            {
                high=mid-1;
                ans=mid;
            }
            else
            {
                low=mid+1;
            }
            
        }


        printf("%lld\n",ans);
        
        vector<int> pos;

        ll x=ans;
        ll ct=1;

        for (int i = m-1; i >=0; i--)
        {
            if(x-a[i]>=0)
            {
                x=x-a[i];
            }
            else
            {
                pos.push_back(i);
                x=ans;
                ct++;

                if(ct==k)
                break;
            }
            
        }

        ct=0;

        for(int i=0;i<m;i++)
        {

            printf("%lld\t",a[i]);
             if(pos[ct]==i)
            {
                printf("/\t");
                ct=ct+1;
            }
        

        }
        
        

    }
}