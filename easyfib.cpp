#include<bits/stdc++.h>
using namespace std;
int a[61];
void solve()
{
    long long int x,y=1;
    cin>>x;

    while (x/2)
    {
        x=x/2;
        y=y*2;
    }

    y=(y-1)%60;

    cout<<a[y]<<"\n";
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    a[0]=0;
    a[1]=1;

    for(int i=2;i<61;i++)
    {
        a[i]=(a[i-1]+a[i-2])%10;
    }

    cin>>t;
    while(t--)
    {
        solve();
    }   
}