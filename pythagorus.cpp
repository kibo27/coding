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
        a[i]=a[i]*a[i];
    }

    sort(a,a+n);

    cout<<"The array::\n";

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n";

    int flag=0;
    for(int i=n-1;i>=0;i--)
    {
        int left=0;
        int right=i-1;

        while(left<right)
        {
            if(a[left]+a[right]==a[i])
            {
                flag=1;
                break;
            }
            else if(a[left]+a[right]>a[i])
            {
                right--;
            }
            else
            {
                left++;
            }
        }

        if(flag==1)
        {
          break;
        }
    }

    if(flag==1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
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