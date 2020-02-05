#include<bits/stdc++.h>
using namespace std;
int catalan(int n)
{   
    int a[n];

    a[0]=1;

    for(int i=1;i<n;i++)
    {
        int res=0;

        for(int j=0;j<i;j++)
        {
            res+=a[j]*a[i-j-1];
        }

        a[i]=res;
    }

    return a[n-1];

}
int main()
{
 int t;
 scanf("%d",&t);

 int x=catalan(t);

 printf("%d\n",x);   
}