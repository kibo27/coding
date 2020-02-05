
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
queue<pair<int,int>> q;
vector<vector<int>> visited(1001,vector<int>(1001,0));
vector<vector<int>> level(1001,vector<int>(1001));
vector<vector<char>> val(1001,vector<char>(1001));
int a,b,m,n;
void bfs()
{
			q.push(make_pair(a,b));
			visited[a][b]=val[a][b]-'0';
			level[a][b]=0;
			
			while(!q.empty())
			{
				pair<int,int> x=q.front();
				q.pop();
				
				
				int tempx,tempy;
				
				tempx=x.ff-1;
				tempy=x.ss;
				
				if(!(tempx<1) && !(tempx>n) && !(tempy<1) && !(tempy>m))
				{	
					if (val[tempx][tempy]!='*')
					{
					if(!visited[tempx][tempy])
					{	
						visited[tempx][tempy]=visited[x.ff][x.ss]+(val[tempx][tempy]-'0');
						level[tempx][tempy]=level[x.ff][x.ss]+1;
						q.push(make_pair(tempx,tempy));
					}
					else
					{
						int tlev=level[x.ff][x.ss]+1;
							if(tlev==level[tempx][tempy])
							{
							int tvis=visited[x.ff][x.ss]+(val[tempx][tempy]-'0');
							if(tvis>visited[tempx][tempy])
							{
								visited[tempx][tempy]=tvis;
							}
							}
						
					}
				}
				}
				tempx=x.ff+1;
				tempy=x.ss;
				
				if(!(tempx<1) && !(tempx>n) && !(tempy<1) && !(tempy>m))
				{	
					if (val[tempx][tempy]!='*')
					{
					if(!visited[tempx][tempy])
					{	
						visited[tempx][tempy]=visited[x.ff][x.ss]+(val[tempx][tempy]-'0');
						level[tempx][tempy]=level[x.ff][x.ss]+1;
						q.push(make_pair(tempx,tempy));
					}
					else
					{
							int tlev=level[x.ff][x.ss]+1;
							if(tlev==level[tempx][tempy])
							{
							int tvis=visited[x.ff][x.ss]+(val[tempx][tempy]-'0');
							if(tvis>visited[tempx][tempy])
							{
								visited[tempx][tempy]=tvis;
							}
							}
					}
				}
				}
				
				tempx=x.ff;
				tempy=x.ss-1;
				
				if(!(tempx<1) && !(tempx>n) && !(tempy<1) && !(tempy>m))
				{	
					if (val[tempx][tempy]!='*')
					{
					if(!visited[tempx][tempy])
					{
						
						visited[tempx][tempy]=visited[x.ff][x.ss]+(val[tempx][tempy]-'0');
						level[tempx][tempy]=level[x.ff][x.ss]+1;
						q.push(make_pair(tempx,tempy));
					}
					else
					{	
							int tlev=level[x.ff][x.ss]+1;
							if(tlev==level[tempx][tempy])
							{
							int tvis=visited[x.ff][x.ss]+(val[tempx][tempy]-'0');
							if(tvis>visited[tempx][tempy])
							{
								visited[tempx][tempy]=tvis;
							}
							}
						
					}
					}
				}
				
				tempx=x.ff;
				tempy=x.ss+1;
				
				if(!(tempx<1) && !(tempx>n) && !(tempy<1) && !(tempy>m))
				{	
					if (val[tempx][tempy]!='*')
					{
					if(!visited[tempx][tempy])
					{	
						
						visited[tempx][tempy]=visited[x.ff][x.ss]+(val[tempx][tempy]-'0');
						level[tempx][tempy]=level[x.ff][x.ss]+1;
						q.push(make_pair(tempx,tempy));
					}
					else
					{
							int tlev=level[x.ff][x.ss]+1;
							if(tlev==level[tempx][tempy])
							{
							int tvis=visited[x.ff][x.ss]+(val[tempx][tempy]-'0');
							if(tvis>visited[tempx][tempy])
							{
								visited[tempx][tempy]=tvis;
							}
							}
					}
				}
				
			}
			}

}					
int main()
{
	DANGER
	int q,xi,yi;
	cin>>n>>m;
	
	
	for (int i = 1; i < n+1; i++)
	{
		for (int j = 1; j < m+1; j++)
		{
			cin>>val[i][j];
		}
	}
	
	cin>>a>>b;
	cin>>q;
	
	bfs();
	
	while(q--)
	{
		cin>>xi>>yi;
		if(val[xi][yi]=='*')
		{
				cout<<"-1 -1\n";
		}
		else
		{	
			    cout<<level[xi][yi]<<" "<<visited[xi][yi]<<"\n";
		}
	}
}
