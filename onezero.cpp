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
int mod(string t,int n)
{   
    int r=0;
    for (int i = 0; i < t.length(); i++)
    {
        int x=t[i]-'0';
        r=r*10+x;
        r=r%n;
    }
    return r;
}
string getmin(int n)
{
    queue<string> q;
    set<int> vis;
    string t="1";
    q.push(t);
    while (!q.empty())
    {
        t=q.front();
        q.pop();
        int rem=mod(t,n);
        if (rem==0)
        {
            return t;
        }
        if (vis.find(rem)==vis.end())
        {
            vis.insert(rem);
            q.push(t+"0");
            q.push(t+"1");          
        }
    }
}
int main()
{
    DANGER 
    int n;
    cin>>n;
    while (n--)
    {
        int t;
        cin>>t;
        cout<<getmin(t)<<"\n";
    }
    
}