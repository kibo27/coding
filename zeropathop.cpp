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
	int t,n;
	
	cin>>t;
	while(t--)
	{	
		cin>>n;
	   long x,y;
		vector<int> val(n+1,0);
		
		for (long i = 0; i < n-1; i++)
		{	
			cin>>x>>y;
			val[x-1]++;
			val[y-1]++;
		}
		
      int res=0;
		
		for (long i = 0; i < n; i++)
		{
			cin>>x;

         if(x && val[i]>1)
         {
            res++;
         }
		}

		cout<<res<<"\n";
	}
}

//my diff approach
//find no of nodes having positive value and having degree grater than 2


/*
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
int bfs(vector<vector<long>> &val,vector<long> &v,int s,int nofz)
{
	vector<int> level(val.size(),-1);
	vector<int> visited(val.size(),1);
	queue<int> q;
	q.push(s);
	level[s]=0;
	visited[s]=0;
	int max=0;
	
	while(!q.empty())
	{
		int cur=q.front();
		q.pop();
		
		for (int i = 0; i < val[cur].size(); i++)
		{
			if(visited[val[cur][i]])
			{
				visited[val[cur][i]]=0;
				level[val[cur][i]]=level[cur]+1;
				if(level[val[cur][i]]>max)
				{
					max=level[val[cur][i]];
				}
				q.push(val[cur][i]);
			}
		}
		
	}
	
	
	int leaf=0;
	int z_leaf=0;
	for (int i = 0; i < level.size(); i++)
	{	
		
		if(level[i]==max)
		{	/*cout<<"\n";
			cout<<"Number: "<<i<<" level"<<level[i]<<"\n";
			cout<<"\n";

			leaf++;
				
			if(v[i]==0)
			{
			z_leaf++;
			}
		}
	}
	
	//cout<<"\n"<<"No of zeroes outide::"<<z_leaf<<"\n";
	
	//cout<<"leaf nodes:: "<<leaf<<"\n";
	
	int t_left=v.size()-leaf-1;
	//cout<<"nodes_left:: "<<t_left<<"\n";
	int total_z=nofz-z_leaf;
		//cout<<"inside zero:: "<<total_z<<"\n";
	int res=t_left-total_z;
		//cout<<"All ndoes except leaf and inner nodes having value zero are:: "<<res<<"\n";
	return res;
	
}
int main()
{
	DANGER
	int t,n;
	
	cin>>t;
	while(t--)
	{	
		cin>>n;
		long x,y,s;
		long long sum=0;
		vector<long> v(n+1,-1);
		vector<vector<long>> val(n+1);
		
		for (long i = 0; i < n-1; i++)
		{	
			cin>>x>>y;
			if(i==0)
			{
			s=x;
			}
			
			val[x].pb(y);
			val[y].pb(x);
		}
		
		int nozero=0;
		
		for (long i = 0; i < n; i++)
		{
			cin>>v[i];
			if (v[i]==0)
			{
				nozero++;
			}
		}
		
		//cout<<"Total zeros are::\n"<<nozero<<"\n";
		
		int res=bfs(val,v,s,nozero);
		
		cout<<res<<"\n";
	}
}
*/
