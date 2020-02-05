#include<bits/stdc++.h>
using namespace std;
long a[1000000];
long fib(long n)
{
	if(a[n]!=-1)
	return a[n];

	a[0]=0;
	a[1]=1;

	for(int i=2;i<n+1;i++)
	{
		a[i]=(a[i-1]%(100000007)+a[i-2]%(100000007))%(100000007);
	}

	return a[n];
}
int main(int argc, char const *argv[])
{
	long t;
	scanf("%ld",&t);

	memset(a,-1,sizeof(a));

	while(t--)
	{
	long n;

	scanf("%ld",&n);

	printf("%ld\n",fib(n));
	}	
	return 0;
}