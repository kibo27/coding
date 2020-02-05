#include<bits/stdc++.h>
using namespace std;
long etf(long n)
{
    long result=n;

    for (int i = 2; i*i <=n; i++)
    {
        if(n%i==0)
        {

            while(n%i==0)
            {
                n=n/i;
            }

            result=result-result/i;
        }
    }
    

    if(n>1)
    result =result-result/n;

    return result;
}
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        long n;
        scanf("%ld",&n);

        printf("%ld\n",etf(n));
    }
}