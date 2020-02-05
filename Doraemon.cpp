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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> x(n,vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>x[i][j];
        }
    }

    LL cts=n*m;

    for (int i = 1; i <n-1; i++)
    {
        for (int j = 1; j <m-1; j++)
        {   
            int a=i-1,b=i+1,c=j-1,d=j+1;

            while((a>=0 && b<n) && (c>=0 && d<m))
            {
                if(x[a][j]==x[b][j] && x[i][c]==x[i][d])
                {
                        cts++;
                        a--;
                        b++;
                        c--;
                        d++;
                }
                else
                {
                    break;
                }
                
            }   
        }
    }

    cout<<cts<<"\n";

    }

}