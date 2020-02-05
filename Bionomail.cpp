#include<bits/stdc++.h>
using namespace std;
int min(int i,int j)
{
    return (a>b)?a:b;
}
int B(int n,int k)
{
    int a[n+1][k+1]

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<=min(i,k);i++)
        {
            if(j==0||j==n)
                c[i][j]=1;
            else
                c[i][j]=c[i-1][j-1]+c[i-1][j]
        }
    }

    return c[n][k];
}
int main()
{
 int n,k;
 scanf("%d %d",&n,&k);

 printf("%d\n",B(n,k));
}