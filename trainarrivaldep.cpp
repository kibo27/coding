#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    
    multimap<int,char> x;
    int a,b;
    
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
       x.insert(pair<int,char>(a,'a'));
       x.insert(pair<int,char>(b,'b'));
    }
    int res=0;
    int plat=0;
    for(auto it=x.begin();it!=x.end();it++)
    {
        if(it->second=='a')
        {
            plat++;
        }
        else
        {
            plat--;
        }
        
        if(plat>res)
        {
            res=plat;
        }

		cout<<"Plat"<<plat<<"\n";
    }
    
    cout<<res<<"\n";
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}