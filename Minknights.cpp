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
int mov[][2]={{2,1},{-2,1},{2,-1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
vector<vector<LL>> visited(8,vector<LL>(8));
bool res(pair<LL,LL> st)
{
  if (st.ff<0 || st.ff>7 || st.ss<0 || st.ss>7 ||visited[st.ff][st.ss])
  {
    return false;
  } 

  return true;
}
LL bfs(pair<LL,LL> st,pair<LL,LL> en)
{   
    /*if(st.ff==en.ff && st.ss==en.ss)
    {
      return 0;
    }
    else if (st.ff<0 || st.ff>7 || st.ss<0 || st.ss>7 ||visited[st.ff][st.ss])
    {
      return INT_MAX; 
    }
    else
    {
      LL res=INT_MAX;
      visited[st.ff][st.ss]=1; 
      for (int i = 0; i < 8; i++)
      {
       res=min(res,1+dfs(visited,{st.ff+mov[i][0],st.ss+mov[i][1]},en));
      } 
      //visited[st.ff][st.ss]=0;
      return res;
    }
    */
  
   vector<vector<LL>> level(8,vector<LL>(8,0));
   queue<pair<LL,LL>> x;
   x.push(st);
   visited[st.ff][st.ss]=1;

   while (!x.empty())
   {
     pair <LL,LL>t=x.front();
     if (t==en)
     {
       break;
     }
     
     visited[t.ff][t.ss]=1;
     x.pop();

     for (int i = 0; i < 8; i++)
     {
       if(res({t.ff+mov[i][0],t.ss+mov[i][1]}))
       { if(!visited[t.ff+mov[i][0]][t.ss+mov[i][1]])
       {
         level[t.ff+mov[i][0]][t.ss+mov[i][1]]=level[t.ff][t.ss]+1;
         x.push({t.ff+mov[i][0],t.ss+mov[i][1]});
       }
       }
     }
   }

    return level[en.ff][en.ss];
}
int main()
{
  DANGER 
  int t;
  cin>>t;
  while (t--)
  {
    string s[2];
    cin>>s[0];
    cin>>s[1];
    vector<pair<LL,LL>> st(2);
    
    st[0].ff=s[0][0]-'a';
    st[0].ss=s[0][1]-'1';
    
    st[1].ff=s[1][0]-'a';
    st[1].ss=s[1][1]-'1';

    for(int i=0; i< visited.size(); i++)
    fill(visited[i].begin(),visited[i].end(),0);
    
    //cout<<st[0].ff<<" "<<st[0].ss<<"\n";
    //cout<<st[1].ff<<" "<<st[1].ss<<"\n";

    cout<<bfs(st[0],st[1])<<"\n";
  }
  
}