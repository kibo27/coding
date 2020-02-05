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
#define mod 		 100000
int main()
{
	
	int lkey,nkey,skey,te;
	cin>>skey>>lkey;
	cin>>nkey;
	vector<int> y(nkey+1);
	
	//vector<vector<int>> x(mod);
	vector<int> vis(mod+1,1);
	vector<int> level(mod+1);
	
	for (int i = 0; i < nkey; i++)
	{
		cin>>y[i];
	}
	
	queue<int>q;
	q.push(skey);
	vis[skey]=0;
	int flag=0;
	level[skey]=0;
	
	while(!q.empty())
	{	
		long cur=q.front();
		q.pop();
		
		if(cur==lkey)
		{
			flag=1;
			break;
		}

		for (int i = 0; i < nkey; i++)
		{
			long res=((cur)*(y[i]));
			res=res%mod;
			
			if(vis[res])
			{
			q.push(res);
			level[res]=level[cur]+1;
			vis[res]=0;
			}
		}
				
		
	}
	
	
	if(flag==0)
	cout<<"-1"<<"\n";
	else
	cout<<level[lkey]<<"\n";
}
