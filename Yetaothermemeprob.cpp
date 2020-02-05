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
LL ans(LL x)
{   
    LL i,temp;
    i=1;
    while(1)
    {
        temp=(LL)pow(10,i);
        temp=temp-1;
        if(temp>x)
        break;
        i++;
    }

    return (i-1);

}
int main()
{
    DANGER
    int t;
    cin>>t;
    while (t--)
    {
        LL a,b;
        cin>>a>>b;
        
        cout<<a*ans(b)<<"\n";
    }
     
}
