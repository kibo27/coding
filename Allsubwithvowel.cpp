#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool isvol(char x)
{
    return ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' );
}
void solve()
{
    string s;
    cin>>s;
    int len=s.length();

    set<char> hash;

    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            if(isvol(s[j]))
            {
                hash.insert(s[j]);   
            }
            else
            {
                break;
            }

            if(hash.size()==5)
            {
                cout<<s.substr(i,j-i+1)<<"\n";
            }
        }

        hash.clear();
    }
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}