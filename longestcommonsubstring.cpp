#include<bits/stdc++.h>
using namespace std;
void solve()
{   
    string x,y;
    int n,m;
    cin>>n>>m;
    cin>>x;
    cin>>y;

    int max=0;
    int lcs[n+1][m+1];
    memset(lcs,0,sizeof(lcs));

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(x[i-1]==y[j-1])
            {
                lcs[i][j]=1+lcs[i-1][j-1];

                if(lcs[i][j]>max)
                {
                    max=lcs[i][j];
                }
            }
        }
    }

    cout<<max<<"\n";
    
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