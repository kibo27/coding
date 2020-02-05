#include<bits/stdc++.h>
using namespace std;
//or you could have counted the no of ones;
void solve()
{
    string s;
    cin>>s;

    int len=s.length();
    // case 1:: All element become 0 so can't change
    // case 2:: All element become -1 so can't chane too

    

    while(1)
    {   
        int flag0=0;
        int flag2=0;
        for(int i=0;i<len;i++)
        {   
            

            if(s[i]=='2')
                flag2++;

            if(s[i]=='0')
                flag0++;

            if(s[i]=='1')
            {   
                s[i]='2';
                if(i-1>=0)
                {
                    if(s[i-1]!='2')
                    {
                        if(s[i-1]=='0')
                        {
                            s[i-1]='1';
                        }
                        else
                        {
                            s[i-1]='0';
                        }
                    }
                }

                if(i+1<len)
                {
                    if(s[i+1]!='2')
                    {
                        if(s[i+1]=='0')
                        {
                            s[i+1]='1';
                        }
                        else
                        {
                            s[i+1]='0';
                        }
                    }
                }
            }
        }

     


        if(flag2==len)
        {
            cout<<"WIN\n";
            break;
        }

        if(flag0+flag2==len || flag0==len)
        {
            cout<<"LOSE\n";
            break;
        }
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}