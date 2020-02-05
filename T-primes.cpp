#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000000
int main()
{   
    vector <bool>a(MAX+1,true);

    a[0]=a[1]=false;
    for (int i=2; i*i<=MAX; i++)
    {   
        if(a[i])
        for (int j = i*i; j<=MAX; j+=i)
        {
            a[j]=false;
        }
    }

    map<ll,bool>ap;
    
    for (int i = 2; i<=MAX; i++)
    {
        if(a[i])
        ap[1ll *i*i]=true;
    }
    
    int n;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {    ll x;
        cin>>x;

        if(ap[x])
        printf("YES\n");
        else
        printf("NO\n");
    }
}