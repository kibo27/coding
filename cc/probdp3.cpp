#include<bits/stdc++.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
long res(long p[],int n,int x)
{
 if(x>n)
    return 0;

int ans=max(res(p,n,x+1),p[x]+res(p,n,x+2));

    return ans;
}
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);

    long p[n];

    for(int i=0;i<n;i++)
    {
        scanf("%ld",&p[i]);
    }

    printf("The max profit::%ld\n",res(p,n,1));
}

/*

ans[0]=0;
ans[1]=p[1];

for(int i=2;i<n+1;i++)
{
    ans[i]=max(ans[i-1],p[i]+ans[i-2]);
}

*/