#include<bits/stdc++.h>
using namespace std;
int Bell(int n)
{
    int a[n+1][n+1];

    a[0][0]=1;

    for(int i=1;i<n+1;i++)
    {
        a[i][0]=a[i-1][i-1];

        for(int j=1;j<=i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i][j-1];
        }
    }

    return a[n][0];
}
int main()
{   
    int t;
    scanf("%d",&t);

    printf("%d\n",Bell(t));
}