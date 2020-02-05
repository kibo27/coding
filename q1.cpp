#include<bits/stdc++.h>
using namespace std;
/*void pri(int a[],int len)
{
	if(len<0)
		{
			printf("HEllo\n");
			return;
		}
		
		pri(a,len-1);
		printf("%d\n",a[len]);
}
int main(int argc, char const *argv[])
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	pri(a,9);
	return 0;
}
*/
/*bool pall(char a[],int i,int j)
{
	if(i==j||i>j)
		return true;

	if(a[i]==a[j])
		{
			pall(a,i+1,j-1);
		}
	else
		return false;
}
int main(int argc, char const *argv[])
{
	char a[]={"printerretnirp"};
	printf("%d\n",(int)(strlen(a)));
	bool x=pall(a,0,strlen(a)-1);
	if(x)
		printf("Yes a Pallindrome\n");
	else
		printf("Not a pallindrome for sure\n");
	return 0;
}*/

int pow(int a,int b)
{
	if(b==0)
		return 1;

	return a*pow(a,b-1);
}

int main(int argc, char const *argv[])
{
	int a,b;
	printf("Enter a::\n");
	scanf("%d",&a);
	printf("Enter b::\n");
	scanf("%d",&b);

	int x=pow(a,b);

	printf("%d raised to the power %d is ::%d\n",a,b,x);
	return 0;
}