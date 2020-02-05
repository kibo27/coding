#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    int n,s;
    cin>>n>>s;
    int header=0;
    int csum=0;
    int flag=0;
    int x[n]={0};
    
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    
    
    for(int i=0;i<n;i++)
    {
        csum+=x[i];
        
        if(csum>s)
        {
            while(csum>s)
            {
                csum-=x[header];
                header++;
            }
        }
    
        if(csum==s)
        {
            flag=1;
            cout<<header+1<<" "<<i+1<<"\n";
            break;
        }
    }
    
    
    if(flag==0)
    {
        cout<<-1<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
}