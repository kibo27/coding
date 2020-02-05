#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;

	int a[n];
	deque<int> x;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<k;i++)
	{
		while(!x.empty() && a[i]>a[x.back()])
		{
			x.pop_back();
		}
		x.push_back(i);
	}

	for(int i=k;i<n;i++)
	{
		cout<<a[x.front]<<" ";

		while(!x.empty() && x.front<=i-k)
		{
			x.pop_first;
		}

		while(!x.empty() && a[i]>a[x.back()])
		{
			x.pop_back();
		}
		x.push_back(i);
	}

	cout<<a[x.front]<<"\n";
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}