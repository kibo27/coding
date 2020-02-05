#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	deque<int> x;
	vector<int> res;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			x.push_back(a[i]);
		}
	}

	for(int i=0;i<=n-k;i++)
	{
		int left=i;
		int right=i+k-1;

		while(x.front()<left)
		{
			x.pop_front();
		}

		if(x.front()>=left && x.front()<=right)
		{
			res.push_back(a[x.front()]);
		}
		else
		{
			res.push_back(0);
		}
	}

	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<" ";
	}

	cout<<"\n";



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