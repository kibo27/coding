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
        int n;
        cin>>n;
        string res="";
        if(n%2==1)
        {
            res.pb('7');
            n=n-3;
            while (n)
            {
                res.pb('1');
                n=n-2;
            }
        }
        else
        {   
            while (n)
            {
                res.pb('1');
                n=n-2;
            }
            
        }

    cout<<res<<"\n";

    }
     
}

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
     LL n,x,ans=0;
     string s;
     cin>>n>>x;
     cin>>s;
     LL dif=(LL)count(s.begin(),s.end(),'0');
     LL total=dif-(n-dif);
     int bal=0;
     bool inf=false;

     for (int i = 0; i < s.length(); i++)
     {
         if (total==0)
         {
                if (bal==x)
                {
                    inf=true;
                }
         }
        else
        {
                if ((LL)abs(x-bal)%(LL)abs(total)==0)
                    {
                        if ((x-bal)/total>=0)
                        {
                            ans++;
                        }          
                    }
                    
                }


                if(s[i]=='0')
                {
                    bal++;
                }
                else
                {
                    bal--;
                }
    }

    if (inf)
        cout<<"-1\n";
    else   
        cout<<ans<<"\n";

    }
}

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
        string s,t;
        cin>>s>>t;
        vector<vector<int>> x(26);
        
        for (int i = 0; i < s.length(); i++)
        {
            x[s[i]-'a'].pb(i);
        }
        
        LL ans=0,e=-1;        
        bool can=true;

        //cout<<"e::\t";
        int i;    
        for (i = 0; i < t.length(); i++)
        {    
            if (x[t[i]-'a'].empty())
            {
                can=false;
                break;   
            }

            auto temp=upper_bound(x[t[i]-'a'].begin(),x[t[i]-'a'].end(),e);

            if(temp==x[t[i]-'a'].end())
            {
                ans++;
                e=-1;
                temp=upper_bound(x[t[i]-'a'].begin(),x[t[i]-'a'].end(),e);
                e=x[t[i]-'a'][temp-x[t[i]-'a'].begin()];
            }
            else
            {
                e=x[t[i]-'a'][temp-x[t[i]-'a'].begin()];
                if (x[t[i]-'a'][temp-x[t[i]-'a'].begin()]==(s.length()-1))
                {
                    ans++;
                    e=-1;   
                }
            }

           // cout<<e<<" ";      
        }
       // cout<<"\n";

        if(e!=-1)
        ans++;


        if (!can)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<ans<<"\n";   
        }
    }
    
}








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
    while(t--)
    { 
      int n;
      string s;
      cin>>n;
      cin>>s;
      int co=0,ci=0;
      int i;
      for (i = 0; i<s.length(); i++)
      {
        int dig=s[i]-'0';

        if(dig%2==1)
        { 
          co++;
        if(co%2==0)
        {
          break;
        }  
        }   
      }

      if (i==s.length())
      {
        cout<<"-1\n";
      }
      else
      {
        string res;
        for (int j = 0; j<=i; j++)
        {
          res.pb(s[j]);
        }
        cout<<res<<"\n";
      }
}
}

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
    LL n;
    cin>>n;
    vector<LL> x(n);
    for (LL i = 0; i < n; i++)
    {
      cin>>x[i];
    }
    
    int prefix=-1,suffix=n;

    for (LL i = 0; i < n; i++)
    {
      if (x[i]<i)break;
      prefix=i;
    }
    

    for (LL i =n-1; i >=0; i--)
    {
      if (x[i]<(n-1)-i)break;
      suffix=i;
    }
    
    if (suffix<=prefix)
    {
      cout<<"Yes\n";
    }
    else
    {
      cout<<"No\n";
    }
    
    

  }
  
}