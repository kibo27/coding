#include<bits/stdc++.h>
using namespace std;
#define n 9000002
#define mod 1000000007
bool x[n];
long long int a[n];
void solve()
{
    int l,r;
    cin>>l>>r;
    long long res=0;

    res=(a[r*r]-a[l*l-1]+mod)%mod;
    
    cout<<res<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    memset(x,true,sizeof(x));
    x[0]=false;
    x[1]=false;
    for (int i = 2; i*i<n; i++)
    {
        if(x[i])
        {
            for (int j = i*i; j <n; j+=i)
            {
                x[j]=false;
            }
            
        }
    }
    
    a[0]=0;
    a[1]=0;
    for(int i=2;i<n;i++)
    {   
        if(!x[i])
        a[i]=a[i-1]+i;
        else
        a[i]=a[i-1];
        
    }

    int t;
    cin>>t;
    
    while(t--)
    {
        solve();
    }
    
}