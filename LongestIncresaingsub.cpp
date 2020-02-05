#include<bits/stdc++.h>
using namespace std;
int _lis(int a[],int n,int *max)
{
    if(n==1)
    return 1;

    int res,max_ending_here=1;

    for(int i=1;i<n;i++)
    {
        res=_lis(a,i,max);

        if(a[i-1]<a[n-1]&&res+1>max_ending_here)
        max_ending_here=res+1;
    }

    if(*max<max_ending_here)
    *max=max_ending_here;

    return max_ending_here;
}
int lis(int a[],int n)
{
    int max=1;

    _lis(a,n,&max);

    return max;

}
int main()
{
    int n=16;


    int a[n]={1,3,5};

    

    int max=lis(a,n);

    printf("%d\n",max);
}

/*
or the bottom up approach is pretty good
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int dp[n];
    int max=INT_MIN;
    dp[0]=1;

    for(int i=1;i<n;i++)
    {   
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[i]>=a[j] && dp[i]<(dp[j]+1))
            {
                dp[i]=dp[j]+1;
            }

            
        }
    }

 
    
    cout<<*max_element(dp,dp+n)<<"\n";
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
*/