#include<bits/stdc++.h>
using namespace std;
int a[10000]={0};

int maxdivide(int a,int b)
{	
	while(a%b==0)
		a=a/b;

	return a;
}

int isugly(int x)
{
	x=maxdivide(x,2);
	if(a[x])return 1;
	x=maxdivide(x,3);
	if(a[x])return 1;
	x=maxdivide(x,5);
	if(a[x])return 1;

	if(x==1)
		return 1;
	else
		return 0;
}

int ugly(int n)
{
	int ct=1;
	int i=1;
	while(ct<n)
	{
		i++;
		if(isugly(i))
			{
				ct++;
				a[i]=1;
			}
	}
	return i;
}
int main()
{
	int n;
	printf("Enter the Numeber::\n");
	scanf("%d",&n);
	a[0]=1;
	int g=ugly(n);

	printf("The %d ugly number is :: %d\n",n,g);
}