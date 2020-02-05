#include<bits/stdc++.h>
using namespace std;
struct box
{
    int h,w,d;
};
bool comp(box s1,box s2)
{
    return (s1.d*s1.w<=s2.d*s2.w);
}
void solve()
{
    int n;
    cin>>n;
    box x[3*n];
    int k=0;

    for(int i=0;i<n;i++)
    {   
        int temp[3]={0};
        for(int j=0;j<3;j++)
        {
            cin>>temp[j];
        }

        x[k].h=temp[0];
        x[k].d=min(temp[1],temp[2]);
        x[k].w=max(temp[1],temp[2]);

        k++;

        x[k].h=temp[1];
        x[k].d=min(temp[0],temp[2]);
        x[k].w=max(temp[0],temp[2]);

        k++;

        x[k].h=temp[2];
        x[k].d=min(temp[1],temp[0]);
        x[k].w=max(temp[1],temp[0]);

        k++;
    }

    int size=3*n;
    
    sort(x,x+size,comp);


    int maxh[3*n]={0};
    int mx=INT_MIN;

    for(int i=0;i<3*n;i++)
    {   
        maxh[i]=x[i].h;
        for(int j=0;j<i;j++)
        {
            if(x[i].d>x[j].d && x[i].w>x[j].w)
            {
                if(maxh[i]<maxh[j]+x[i].h)
                {
                    maxh[i]=maxh[j]+x[i].h;

                }
            }
        }


        if(mx<maxh[i])
        mx=maxh[i];
    } 
    

    cout<<mx<<"\n";
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