
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

int main()
{
    DANGER 
    int t;
    cin>>t;
    while (t--)
    {
        LL n,d,x;

        cin>>n>>d;

        if (n==d || n>d)
        {
            cout<<"YES\n";    
        }
        else
        {   
            double x=1.0;
            LL val=(LL)sqrt(d);
          
            LL temp=val-1+(LL)ceil(x*d/val);
          
            if (temp<=n)
            {
               cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
            
            
        }
        
        
    }
    
}
