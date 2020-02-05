#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int lb,int n)
{
	int ll=lb-1;
	int pivot=a[n];

	for(int i=lb;i<n;i++)	
	{
		if(a[i]<=pivot)
		{
			ll++;
			swap(a[ll],a[i]);
		}
	}

	ll++;
	swap(a[ll],a[n]);

	return ll;

}
int res(int a[],int low,int high,int k)
{
	int pos=partition(a,low,high);

	int abs=pos-low+1;

	if(abs==k)
	{
		return a[pos];
	}
	else if(abs>k)
	{
		return res(a,low,pos-1,k);
	}
	else
	{
		return res(a,pos+1,high,k-abs);
	}

}
void solve()
{	
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;

	cout<<res(a,0,n-1,k)<<"\n";
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