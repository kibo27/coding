/*
  "I knew I shouldn't have gotten out of bed today."
   - Squidward Tentacles
*/
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
void dfs(int s,vector<vector<int>> &x,vector<char> &val,vector<int> &visited,vector<vector<int>> &b)
{
   
   visited[s]=0;

   for (int i = 0; i < x[s].size(); i++)
   {  
      if(visited[x[s][i]])
      dfs(x[s][i],x,val,visited,b);
   }
   
   b[s][val[s]-'a']++;

   for (int i = 0; i <x[s].size(); i++)
   {
      for (int j = 0; j < 26; j++)
      {
         b[s][j]+=b[x[s][i]][j];
      }
      
   }
   
}


int main()
{
   DANGER
   int n,q,u,v;
   string s;
   cin>>n>>q;
   vector<char> val(n+1);
   
   vector<vector<int>> x(n+1);

   for (int i = 1; i < n+1; i++)
   {
      cin>>val[i];
   }
   

   for (int i = 0; i <n-1; i++)
   {
      cin>>u>>v;
      x[u].pb(v);
      x[v].pb(u);
   }

   vector<vector<int>> b(n+1,vector<int> (26,0));
   vector<int> visited(n+1,1);

   dfs(v,x,val,visited,b);   

   while (q--)
   {  
      cin>>v>>s;
      vector<int> a(26,0);
      //vector<int> b(26,0);
      int c=0;
       vector<int> visited(n+1,1);
      for (int i = 0; i < s.length(); i++)
      {
         a[s[i]-'a']++;
      }

      for (int i = 0; i < 26; i++)
      {   
         //cout<<(char)(65+i)<<" "<<a[i]<<" "<<b[i]<<"\n";

         if(b[v][i]<a[i])
         {
            c+=a[i]-b[v][i];
         }
      }

      cout<<c<<"\n";  
   }
   
}
/*
  "I knew I shouldn't have gotten out of bed today."
   - Squidward Tentacles
*/
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
void dfs(vector<int> &b,int s,vector<vector<int>> &x,vector<char> &val,vector<int> &visited,vector<int> &parent)
{
   b[val[s]-'a']++;
   visited[s]=0;

   for (int i = 0; i < x[s].size(); i++)
   {  
      if(visited[x[s][i]])
      if(x[s][i]!=parent[s])
      dfs(b,x[s][i],x,val,visited,parent);
   }
   
}

void bfs(vector<vector<int>> &val,vector<int> &visited,vector <int> &parent,int s)
{
   queue<int> q;
   q.push(s);

   parent[s]=-1;

   while (!q.empty())
   {
      int f=q.front();
      q.pop();
      visited[f]=0;

      for (int i = 0; i < val[f].size(); i++)
      {
         if(visited[val[f][i]])
         {
            parent[val[f][i]]=f;
            q.push(val[f][i]);
         }
      }
      
   }
   
}
int main()
{
   DANGER
   int n,q,u,v;
   string s;
   cin>>n>>q;
   vector<char> val(n+1);
   
   vector<vector<int>> x(n+1);

   for (int i = 1; i < n+1; i++)
   {
      cin>>val[i];
   }
   

   for (int i = 0; i <n-1; i++)
   {
      cin>>u>>v;
      x[u].pb(v);
      x[v].pb(u);
   }

   vector<int> visited(n+1,1);
   vector<int> parent(n+1);

   bfs(x,visited,parent,1);

 

   while (q--)
   {  
      cin>>v>>s;
      vector<int> a(26,0);
      vector<int> b(26,0);
      int c=0;
       vector<int> visited(n+1,1);
      for (int i = 0; i < s.length(); i++)
      {
         a[s[i]-'a']++;
      }

      dfs(b,v,x,val,visited,parent);

      for (int i = 0; i < 26; i++)
      {   
         //cout<<(char)(65+i)<<" "<<a[i]<<" "<<b[i]<<"\n";

         if(b[i]<a[i])
         {
            c+=a[i]-b[i];
         }
      }

      cout<<c<<"\n";  
   }
   
}
*/