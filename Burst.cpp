//Burst the ballons
#include<bits/stdc++.h>
using namespace std;
void res(int &dp[],int i,int j,int a[])
{   
    if(i==j)
    {
        return 0;
    }

    int k;
    int count;
    int min=INT_MAX;
    
    for(int k=i;k<j;k++)
    {
        count=res(dp,i,k)+res(dp,k+1,j,a)+a[i-1]*a[k]*a[j];
        if(min>count)
        {
            min=count;
        }
    }



    return min;

}
void solve()
{
    int n;
    cin>>n;
    int dp[n][n];
    int a[n];

    for(int i=0;i<n;i++)
    {
        for(int =0;j<n;j++)
        {
            dp[i][j]={0};
        }
    }

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   

    res(a,1,n-1,dp);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j];
        }
    }

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