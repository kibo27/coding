#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {   
        int n;
        scanf("%d",&n);

        if(n==-1)
        break;

        int a[n],sum=0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        
        if(sum%n!=0)
        {
            printf("-1\n");
        }
        else
        {   
            int d=sum/n;
            int ct=0;
            for (int i = 0; i < n; i++)
            {
                if(a[i]<d)
                    ct+=d-a[i];
            }

            printf("%d\n",ct);
        }

    }   
}