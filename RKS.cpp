#include<bits/stdc++.h>
using namespace std;
long a[1000];
long By(long x)
{
    for(int i=0;i<1000;i++)
    {
        if(a[i]==x)
        return i;
    }
}
int main()
{
    long n,x;
    long c;
    
    map<long,long> M1;

    scanf("%ld %ld",&n,&c);

    long d=0;

    for(long i=0;i<n;i++)
    {
        scanf("%ld",&x);

        M1[x]++;

        if(M1[x]==1)
        {
            a[d++]=x;
        }
    }


    vector<pair<long,long>> p1;

    copy(M1.begin(),M1.end(),back_inserter<vector<pair<long,long>>>(p1));

      

    sort(p1.begin(),p1.end(),[](const pair<long,long>& s,const pair<long,long>& r)
    {
        if(s.second!=r.second)
        return s.second>r.second;
        
        return By(s.first)<By(r.first);

    });

    for(int i=0;i<p1.size();i++)
    {
        for(int j=0;j<p1[i].second;j++)
            printf("%ld ",p1[i].first);
        
    }   
 

    printf("\n");
}