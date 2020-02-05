#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    
    vector<int> c(n);
    vector<int> h(n);
    vector<int> x(n,0);

    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }

    for(int i=0;i<n;i++)
    {
        int left=i-c[i];
        int right=i+c[i];

        if(left<0)
        {
            left=0;
        }

        if(right>n-1)
        {
            right=n-1;
        }

        x[left]+=1;

        if(right<n-1)
        {
            x[right+1]-=1;
        }
    }

    for(int i=1;i<n;i++)
    {
        x[i]+=x[i-1];
    }

    sort(x.begin(),x.end());
    sort(h.begin(),h.end());

    int flag=1;

    for(int i=0;i<n;i++)
    {
        if(x[i]!=h[i])
        {
            flag=0;
            break;
        }
    }

    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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