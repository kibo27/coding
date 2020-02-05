#include<bits/stdc++.h>
using namespace std;
int min(int x,int y,int z)
{
	if(x<y)
		{
		if(x<z)
			return x;
		else
			return z;
		}
	else
		{
			if(y<z)
				return y;
			else
				return z;
		}

}
int ugly(int n)
{
	int a[n];
	a[0]=1;

	int n2,n3,n5;
	n2=n3=n5=0;

	int nextmulof2=a[n2]*2;
	int nextmulof3=a[n2]*3;
	int nextmulof5=a[n2]*5;

	for(int i=1;i<n;i++)
	{
		int nextugly=min(nextmulof2,nextmulof3,nextmulof5);
		a[i]=nextugly;

		if(nextugly==nextmulof2)
		{
			n2=n2+1;
			nextmulof2=a[n2]*2;
		}
	    if (nextugly==nextmulof3)
	    {
	    	n3=n3+1;
			nextmulof3=a[n3]*3;
	    }
		if (nextugly==nextmulof5)
		{
			n5=n5+1;
			nextmulof5=a[n5]*5;
		}
	}

	return a[n-1];
}
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
	int j;
	scanf("%d",&j);
	int x=ugly(j);
	printf("%d\n",x);	
	}
	return 0;
}

/*This is optimzed as it is just comaring the mutiples of 2,3,5 and placing them at the correct positions and does not have to compute whether a number is ugly or not!!!