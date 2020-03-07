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

    vector<int> s(n);
    LL su=0;
    LL is=0;

    for (int i = 0; i < n; i++)
    {
      cin>>s[i];
      su+=s[i];
      if(s[i]==0)
      is++;
    }



    if(is>0)
    {
      su+=is;
    }



    if (su==0)
    {
      is=is+1;
    }
    
    cout<<is<<"\n";

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
      int n;
      cin>>n;
      vector<LL> x(2*n);
      for (int i = 0; i <2*n; i++)
      {
        cin>>x[i];
      }

      sort(x.begin(),x.end());

      LL res=x[n]-x[n-1];

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
    int n;
    cin>>n;

    vector<LL> x(n);
    map<int,int> ma;
    
    for (int i = 0; i < n; i++)
    {
     cin>>x[i];
     if (ma.find(x[i])==ma.end())
     {
       ma[x[i]]=1;
     }
     else
     {
       ma[x[i]]++;
     }
    }
    
    int val=0;

    for (auto i =ma.rbegin(); i !=ma.rend() ; i++)
    {
      if (i->ss==1)
      {
        val=i->ff;
        break;
      }
    }

    for (int i = 0; i <x.size(); i++)
    {
      if (val==x[i])
      {
          val=i;
          break;
      }
    }
    
    int temp=x[val];
    x[val]=x[0];
    x[0]=temp;
    
    for (int i = 0; i < x.size(); i++)
    {
     cout<<x[i]<<" ";
    }

    cout<<"\n";
    


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
    LL n,k;
    cin>>n>>k;
    vector<LL> x(n);
    vector<LL> a(n);
    vector<LL> b(n);
    for (int i = 0; i < n; i++)
    {
     cin>>x[i];
     a[i]=x[i]%k;
     if (x[i]%k)
     {
      b[i]=k-(x[i]%k);
     }
    }

    for (int i = 1; i < n; i++)
    {
      a[i]+=a[i-1];
    }

    for (int i = n-2; i >=0; i--)
    {
      b[i]+=b[i+1];
    }

    LL res=0;

    int flag=0;

   for (int i = 0; i < n-1; i++)
   {
     if (a[i]>=b[i+1])
     {
       flag=1;
       res=a[i]-b[i+1];
       break;
     }
   }
   

   if(flag)
   {
     cout<<res<<"\n";
   }
   else
   {
     cout<<a[n-1]<<"\n";
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

      LL final=0;
    while (t--)
    {
      int n,b;
      char c;
      cin>>n;
      vector<vector<int>> x(4,vector<int>(4,0));

      for (int i = 0; i < n; i++)
      {
        cin>>c>>b;
        x[c-'A'][b/3-1]++;
      }

      int a[4]={0,1,2,3};

      vector<LL> res;


      do
      {
          int b[4]={0,1,2,3};

          do
          {
            LL val=0; 
            if (x[a[0]][b[0]]==0)
            {
              val-=100;
            }
            else
            {
              val=val+x[a[0]][b[0]]*100;
            }
            

            if (x[a[1]][b[1]]==0)
            {
              val-=100;
            }
            else
            {
              val=val+x[a[1]][b[1]]*75;
            }

            if (x[a[2]][b[2]]==0)
            {
              val-=100;
            }
            else
            {
              val=val+x[a[2]][b[2]]*50;
            }

            if (x[a[3]][b[3]]==0)
            {
              val-=100;
            }
            else
            {
              val=val+x[a[3]][b[3]]*25;
            }

            res.push_back(val);
          } while (next_permutation(b,b+4));
          
      } while (next_permutation(a,a+4));

        LL ans=*max_element(res.begin(),res.end());

        final+=ans;

    cout<<ans<<"\n";
    }
    cout<<final<<"\n";
  
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
    LL n,p;
    cin>>n>>p;
    vector<LL> y(n);
    vector<pair<LL,LL>> x(n);
    vector<pair<int,int>> res(n);
    vector<LL> ans(n,0);
    int flag=0;
    for (int i = 0; i < n; i++)
    {
      cin>>y[i];
      x.pb({y[i],i});
    }
    
    pair<int,int> resa;
    sort(x.begin(),x.end(),greater<pair<int,int>>());

    for (int i=0; i<n; i++)
    {
      if (p%x[i].ff!=0)
      {
        flag=1;
        resa.ff=x[i].ss;
        resa.ss=0;
        break;
      }
      else
      {
        for (int j = 0; j <res.size(); j++)
        {
          if (res[j].ff%x[i].ff!=0)
          {
            flag=2;
            resa.ff=res[j].ss;
            resa.ss=x[i].ss;
            break;
          }
        }

        if (flag==2)
        {
          break;
        }
        res.pb({x[i]});
      }
    }

    if (flag==1)
    {
      ans[resa.ff]=p/y[resa.ff]+1;
      cout<<"YES ";
      for (int i = 0; i <ans.size(); i++)
      {
        cout<<ans[i]<<" ";
      }
      cout<<"\n";
    }
    else if(flag==2)
    {
      ans[resa.ff]=p/y[resa.ff]-1;
      ans[resa.ss]=(p-(p/y[resa.ff]-1)*y[resa.ff])/y[resa.ss]+1;
      cout<<"YES ";
      for (int i = 0; i <ans.size(); i++)
      {
        cout<<ans[i]<<" ";
      }

      cout<<"\n";
    }
    else
    {
      cout<<"NO\n";
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
        string s;
        cin>>s;
        int l=-1,r;
        for(int i=0;i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                l=i;
                break;
            }
        }
        if(l==-1)
        {
            cout<<"0\n";
        }
        else    
        {
        for (int i = s.length()-1; i >=0; i--)
        {
            if(s[i]=='1')
            {
                r=i;
                break;
            }
        }

        int res=0;



        for (int i = l+1; i < r; i++)
        {
            if (s[i]=='0')
            {
                res++;
            }
            
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
        long n,g,b;
        cin>>n>>g>>b;
        long x=n/2;
        if(n%2==1)
        x=x+1;

        if (n<=g)
        {
            cout<<n<<"\n";
        }
        else
        {
            LL res=x/g;
            LL ex=x%g;
            LL ans=0;
            if(ex==0)
            {   
                ans+=(res-1)*b;
                if(ans<(n-x))
                {
                    ans+=n-x-ans;
                }
                ans+=res*g;
            }
            else
            {
                ans+=(res)*b;
                if(ans<(n-x))
                {
                    ans+=n-x-ans;
                }
                ans+=res*g;
                ans+=ex;
            }

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
    while (t--)
    {
        string s;
        cin>>s;
        vector<set<char>> x(26);
        set<char> y;
        vector<char> res;
        int flag=0;

        for (int i = 0; i <s.length(); i++)
        {
            if (i-1>=0)
            {
                x[s[i]-'a'].insert(s[i-1]);
            }

            if(i+1<s.length())
            {
                x[s[i]-'a'].insert(s[i+1]);
            }
        }

        int st=-1;

        for (int i=0; i < x.size(); i++)
        {
            if (x[i].size()>2)
            {
                flag=1;
                break;
            }
            else if(x[i].size()==1)
            {
                st=i;
                break;
            }
        }
        
        if (flag==1 || flag==0)
        {
            cout<<"NO\n";
        }
        else 
        {   
            vector<int> f(26,0);
            char el=*x[st].begin();
            
            res.pb((char)('a'+st));
            res.pb(el);

            x[st].erase(x[st].begin());

            while (true)
            {
                for (auto i =x[el-'a'].begin(); i !=x[el-'a'].end(); i++)
                {
                   if (*i!=res[res.size()-2])
                   {
                      el=*i;
                      res.pb(*i);
                      break;
                   }
                }
                
            }
               
        }
    }
}