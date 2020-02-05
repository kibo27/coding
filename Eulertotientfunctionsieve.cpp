#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define max 100000000000000
int a[10000001];
int main()
{
    vector <ll> Primes;

    ll t=sqrt(max);

    for (ll i = 0; i <t+1; i++)
    {
        a[i]=1;
    }
    
    a[0]=a[1]=0;

    for (ll i = 2; i*i<=t; i++)
    {
        if(a[i])
        for (int j = i*i; j<=t; j+=i)
        {
            a[j]=0;
        }
        
    }

    for (long i = 0; i <=t; i++)
    {   
        if(a[i])
        {
            Primes.push_back(i);
        }
    }


    long long int m,n;

    scanf("%lld %lld",&m,&n);

    ll f[n-m+1];
    

    for (long i = 0; i <n-m+1; i++)
    {
        
        f[i]=m+i-1;
    }


    for (long long int i =0; i <=n-m; i++)
    {
        printf("%lld\t",f[i]);
    }
     printf("\n");
    for (long i =0; i <Primes.size(); i++)
    {  
        
        if(Primes[i]>n)
        break;

        long base=(m/Primes[i])*Primes[i]; 
        
        if (base<m)
        base=base+Primes[i];

        ll u=0;
        u=(base-Primes[i])/Primes[i];

           for (long j=base; j <=n; j+=Primes[i])
        {   
            
            f[j-m]=f[j-m]-u;
            ++u;
        } 

        if(m==1)
        f[0]=1;  
    }

    for (long long int i =0; i <=n-m; i++)
    {
        printf("%lld\n",f[i]);
    }
    
    
}