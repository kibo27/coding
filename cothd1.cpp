//Takeaway only perfect squares have odd no of divisors
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int x,y;
    cin>>x>>y;
    long long c=sqrt(x);
    long long d=sqrt(y);

    if(c*c<x)
    {
        c=c+1;
    }

    long res=d-c+1;

    if(res%2==1)
    cout<<"Odd\n";
    else
    cout<<"Even\n";
    
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}