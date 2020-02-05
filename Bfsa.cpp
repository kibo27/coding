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
int Bfs(vector<vector<int>> &v,int s,int lim_l)
{
	
	vector<int> vis(v.size(),1);
	queue<int> q;
	vector<int> level(v.size(),1);
	q.push(s);
	vis[s]=0;
	level[s]=1;
	int count=0;
	
	while(!q.empty())
	{
	  int x=q.front();
	  q.pop();
	  for (int i = 0; i < v[x].size(); i++)
	  {	  
		  if(vis[v[x][i]])
		  {
			level[v[x][i]]=level[x]+1;
			if(level[v[x][i]]==lim_l)
			{
			  count++;
			}
			q.push(v[x][i]);
			vis[v[x][i]]=0;;
		  }
	  }
	  
	   if(level[x]>lim_l)
		  {
			  break;
		  }
	  
	}
	
	
	return count;
}
int main()
{
	DANGER
	int n,x,y;
	cin>>n;
	vector<vector<int>> v(n+1);
	
	for (int i = 0; i < n-1; i++)
	{
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
	}
	
	cin>>x;

	int res=Bfs(v,1,x);
	
	cout<<res;	
}
