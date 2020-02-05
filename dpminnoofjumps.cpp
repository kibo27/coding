#include<bits/stdc++.h>
using namespace std;
int minjump(int size,int a[],int dp[],int i)
{   
    if(i>=size-1)
    {
        return dp[i]=0;
    }
    else if(dp[i])
    {
        return dp[i];
    }
    else
    {   
        dp[i]=INT_MAX;
 
        for(int j=1;j<=a[i];j++) 
        {   
            if(i+j<=size)
            {
            int d=1+minjump(size,a,dp,i+j);
            if(d!=INT_MIN)
            {
                dp[i]=min(d,dp[i]);
            }
            
            }
            else
            break;
        }
        return dp[i];
    }
    
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int dp[n];
    memset(dp,0,sizeof(dp));
    
    int ct=minjump(n,a,dp,0);
    
    if(ct==INT_MAX)
    {
        cout<<-1<<"\n";
    }
    else
    cout<<ct<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}