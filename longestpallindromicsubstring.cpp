#include<bits/stdc++.h>
using namespace std;
void solve()
{
string a;
cin>>a;
int n=a.length();
int dp[n][n];

memset(dp,0,sizeof(dp));

int maxlen=1;
int start=0;

for(int i=0;i<n;i++)
{
    dp[i][i]=1;
}

for(int i=0;i<n-1;i++)
{
    if(a[i]==a[i+1])
    {
        dp[i][i+1]=1;
        start=i;
        maxlen=2;
    }
}

for(int curl=3;curl<=n;curl++)
{
    for(int i=0;i<=n-curl;i++)
    {
        int j=i+curl-1;

        if(a[i]==a[j] && dp[i+1][j-1])
        {
            dp[i][j]=1;

            if(maxlen<curl)
            {
                maxlen=curl;
                start=i;
            }
        }
    }
}


#include<bits/stdc++.h>
using namespace std;
void solve()
{
string a;
cin>>a;
int n=a.length();
int dp[n][n];

memset(dp,0,sizeof(dp));

int maxlen=1;
int start=0;

for(int i=0;i<n;i++)
{
    dp[i][i]=1;
}

for(int i=0;i<n-1;i++)
{
    if(a[i]==a[i+1])
    {
        dp[i][i+1]=1;
        start=i;
        maxlen=2;
    }
}

for(int curl=3;curl<=n;curl++)
{
    for(int i=0;i<=n-curl;i++)
    {
        int j=i+curl-1;

        if(a[i]==a[j] && dp[i+1][j-1])
        {
            dp[i][j]=1;

            if(maxlen<curl)
            {
                maxlen=curl;
                start=i;
            }
        }
    }
}



string x=a.substr(start,maxlen);

cout<<x<<"\n";

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
string x=a.substr(start,maxlen);

cout<<x<<"\n";

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