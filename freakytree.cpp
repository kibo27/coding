/*/"I knew I shouldn't have gotten out of bed today./"
- Squidward Tentacles*/

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL,LL> p64;
typedef vector<LL> v64;
#define pb           push_back
#define pf           push_front
#define mp           make_pair
#define ff           first
#define ss           second
#define rep(i,s,e)   for(int i=s;i<=e;i++)
#define brep(i,s,e)  for(int i=s;i>=e;i--)
#define mem(x,y)     memset(x,y,sizeof(x))
#define DANGER       std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
	DANGER
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,c;
		cin>>n;
		vector<vector<pair<int,int>>> val(n+1);
		vector<int>xopo(n+1,0);
		
		
		for (int i = 0; i < n-1; i++)
		{
				cin>>a>>b>>c;
				val[a].pb({b,c});
				xopo[a]++;
		}
		
		
		queue<pair<int,int>> q;
		int count=0;
		q.push({1,0});
		
		while (!q.empty())
		{
			pair<int,int> x=q.front();
			q.pop();
			
			if (xopo[x.ff]==0)
			{
				if(x.ss%2==1)
				{
					count++;
				}
			}
			else
			{
				for (int i = 0; i < xopo[x.ff]; i++)
				{
					pair<int,int> temp=val[x.ff][i];
					int res=x.ss^temp.ss;
					q.push({temp.ff,res});
				}
				
			}
			
		}

		cout<<count<<"\n";
	}
}
