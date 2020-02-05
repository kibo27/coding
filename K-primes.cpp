#include<bits/stdc++.h>
using namespace std;
#define range 100000
int main()
{

 bool x[range+1];
 int f[range+1]={0};


 memset(x,true,sizeof(x));

 x[0]=x[1]=false;

for (int i = 2; i*i <=range; i++)
{
    if(x[i])
    {
        for (int j=i; j<=range; j+=i)
        {
            x[j]=false;
            f[j]++;
        }
        
    }
}


 int t;
 scanf("%d",&t);

 while(t--)
 {
     int a,b,k;

     scanf("%d %d %d",&a,&b,&k);

    int count=0; 

    for(int i =a; i <=b; i++)
    {
        if(f[i]==k)
        count++;
    }

    printf("%d\n",count);
    

 }
   
}