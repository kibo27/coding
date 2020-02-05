#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int A[n];
	int left[n];
	int right[n];

	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}

	left[0]=A[0];
	right[n-1]=A[n-1];

	for(int i=1;i<n;i++)
	{
		left[i]=max(left[i-1],A[i]);
	}

	for(int i=n-2;i>=0;i--)
	{
		right[i]=max(right[i+1],A[i]);
	}

	cout<<"left"<<"\n";

	for(int i=0;i<n;i++)
	{
		cout<<left[i]<<" ";
	}

	cout<<"\n";

	cout<<"Right"<<"\n";

	for(int i=0;i<n;i++)
	{
		cout<<right[i]<<" ";
	}

	cout<<"\n";

	int rain=0;

	for(int i=0;i<n;i++)
	{	
		rain+=min(left[i],right[i])-A[i];	
	}


	cout<<rain<<"\n";
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