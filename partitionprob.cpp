#include<bits/stdc++.h>
using namespace std;
int ispos(int a[],int i,int n,int sum,int total)
{
    if(i>=n || sum>total)
    {
        return 0;
    }
    else if(sum==total)
    {
        return 1;
    }
    else
    {
        return(ispos(a,i+1,n,sum+a[i],total) || ispos(a,i+1,n,sum,total));
    }  
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int total=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        total+=a[i];
    }
    if(total%2==1)
    {
        cout<<"NO\n";
    }
    else
    {

    total=total/2;    
    int res=ispos(a,0,n,0,total);
    if(res)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

    }
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