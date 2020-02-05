#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000
void sieve(long t,vector <int> &Primes)
{
    bool a[t+1];

    for (int i = 0; i <t+1; i++)
    {
        a[i]=true;
    }
    
    a[0]=a[1]=false;

    for (long i = 2; i*i<=t; i++)
    {
        if(a[i])
        for (int j = i*i; j<=t; j+=i)
        {
            a[j]=false;
        }
        
    }

    for (long i = 0; i <=t; i++)
    {   
        if(a[i])
        {
            Primes.push_back(i);
        }
    }
    
}

void printprimes(long m,long n,vector<int> Primes)
{
    bool ax[n-m+1];

    for (long i = 0; i <n-m+1; i++)
    {
        ax[i]=true;
    }
    
    for (long i =0; i <Primes.size(); i++)
    {  
        
        if(Primes[i]>n)
        break;

        long base=(m/Primes[i])*Primes[i]; 
        
        if (base<m)
        base=base+Primes[i];
              

        for (long j=base; j <=n; j+=Primes[i])
        {   
            if(j!=Primes[i])
            ax[j-m]=false;
        }

       
        
    }

    for (long i=0; i <n-m+1; i++)
    {
        if(ax[i]&&i+m!=1)
        printf("%ld\n",(i+m));
    }
    
     printf("\n");
}
int main()
{
    long t=(long)sqrt(MAX);
    vector<int> Primes;
    sieve(t,Primes);
    int x;
    scanf("%d",&x);

    while(x--)
    {   long m,n;
        scanf("%ld %ld",&m,&n);
        printprimes(m,n,Primes);
    }

}