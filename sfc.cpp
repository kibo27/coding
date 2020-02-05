#include<bits/stdc++.h>
using namespace std;
int res(vector<vector<char>>& a,int i,int j,int r,int c,char dir)
{
    if(i==r-1 && j==c-1)
    {   
        if(a[i][j]=='c')
        return 1;

        return 0;
    }
    else if(i>=r || j>=c || a[i][j]=='#' || i<0 || j<0)
    {
        return 0;
    }
    else
    {
        if(dir=='l')
        {   
            if(a[i][j]=='C')
            return 1+max(res(a,i,j-1,r,c,'l'),res(a,i+1,j,r,c,'r'));
            else
            return max(res(a,i,j-1,r,c,'l'),res(a,i+1,j,r,c,'r'));
        }
        else
        {
            if(a[i][j]=='C')
            return 1+max(res(a,i,j+1,r,c,'r'),res(a,i+1,j,r,c,'l'));
            else
            return max(res(a,i,j+1,r,c,'r'),res(a,i+1,j,r,c,'l'));
        }
    }
}
void solve()
{
int r,c;
cin>>r>>c;
vector<vector<char>> a(r,vector<char>(c));
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cin>>a[i][j];
    }
}  
cout<<res(a,0,0,r,c,'r')<<"\n";
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