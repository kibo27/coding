#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==0)
        return 1;
    if(n<0)
        return 0;

    return (solve(n-1)+solve(n-2)+solve(n-3));
}
int main()
{
    int n;
    scanf("%d",&n);

    int x=solve(n);

    printf("%d\n",x);
}

/*
Take an array a[3]
a[0]=1;
a[1]=2;
a[2]=3;

and 

int solve(int a[],int n,int s)
{
    if(S==0)
    return 1;

    if(n<0||s<0)
        return 0;
    
    s=solve(a,n.s-a[n]);
    e=solve(a,n-1,s);

    return s+e;
}

*/