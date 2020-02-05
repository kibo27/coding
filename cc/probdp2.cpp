#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);

    int a[n+1];

    a[1]=1; //1 can be 1 hop
    a[2]=2; //2 can be a 2 hop or 2 one hop
    a[3]=4; //3 can be a 3 hop or 3 one hop or a 2 hop and a one hop or a one hop and a 2hop
    for(int i=4;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2]+f[i-3];
    }

    printf("\n%d\n",a[n]);
}