#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    scanf("%d",&n);

    int a[n+1]={0};

    a[0]=a[1]=1;

    for (int i = 2; i*i <n+1; i++)
    {
        if(!a[i])
        {
            for (int j= i*i; j< n+1; j+=i)
            {
                a[j]=1;
            }
            
        }
    }

    int count=0;

    for (int i = 1; i < n+1; i++)
    {  
        int p=0;

        for (int j = 2; j <=i/2; j++)
        {   
            if(!a[j])
            if(i%j==0)
                p++;
        }

        if(p==2)
        {
            count++;
        }
    }

    printf("%d\n",count);
}