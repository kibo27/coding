#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;

    scanf("%d %d",&n,&q);
    map <long,long>m;
    long x;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&x);
        m[x]++;
    }

    while(q--)
    {
        int a;
        long b;

        scanf("%d %ld",&a,&b);

        if(a==1)
        {
            auto it=m.find(b);

            it->second=-1;
        }
        else
        {   
            auto it=m.find(b);

            if(it->second==-1)
            printf("%ld\n",it->first);
            else
            {
                for(;it!=m.end();it++)
                {
                    if(it->second==-1)
                    break;
                }

                if(it==m.end())
                {
                    auto it1=m.rbegin();
                    printf("%ld\n",it1->first);
                }
                else
                {
                    printf("%ld\n",it->first);
                }
            }


        }

    }
}
