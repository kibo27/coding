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

bool isprime(LL x)
{
    for (LL i = 2; i*i <=x; i++)
    {
        if (x%i==0)
        {
           return false;
        }
    }

    return true;
}

LL gcd(LL a,LL b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

LL eultotient(LL x)
{
  LL res=x;

  for (LL i=2; i*i<=x; i++)
  {
      if(x%i==0)
      {
        while(x%i==0)
        {
          x=x/i;
        }

        res=(res/i)*(i-1);
      }
  }

  if (x>1)
  {
    res=(res/x)*(x-1);
  }
  
  return res;
  
}

int main()
{
    //DANGER
    int t;
    cin>>t;
    while (t--)
    {
       LL x,y;
       cin>>x>>y;
      
       LL val=gcd(x,y);
       y=y/val;

       //cout<<"val"<<" "<<val<<" "<<"y"<<" "<<y<<"\n";

       cout<<eultotient(y)<<"\n";
    }
     
}
