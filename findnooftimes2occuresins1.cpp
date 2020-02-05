#include<bits/stdc++.h>
using namespace std;
void sol(string a,string b,int alen,int blen,int i,int j,int &ct)
{
	if(i>=alen)
	{
		ct=ct+1;;
	}
	else
	{
		for(int k=j;k<blen;k++)
		{
			if(a[i]==b[k])
			{	

				sol(a,b,alen,blen,i+1,k+1,ct);
			}
		}
	}
}
void solve()
{
	int m,n;
	string a,b;
	cout<<"ok1";
	cin>>a;
	cout<<"ok2";
	cin>>b;
	int alen=a.length();
	int blen=b.length();
	int ct=0;
	sol(a,b,alen,blen,0,0,ct);
	cout<<ct<<"\n";
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