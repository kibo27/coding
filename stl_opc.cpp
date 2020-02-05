#include<bits/stdc++.h>
typedef long l;
using namespace std;
int main()
{   

    map<l,l> M1;
    vector <pair<l,l> > p1;
    
    l n,x;
    scanf("%ld",&n);

    for (l i = 100000; i >=-100000; i--)
    {
        M1[i]=0;
    }
    

    for (l i = 0; i < n; i++)
    {
        scanf("%ld",&x);

        M1[x]++;
    }

    copy(M1.begin(),M1.end(),back_inserter<vector<pair<l,l>>>(p1));
    
    sort(p1.begin(),p1.end(),[](const pair<l,l>& s,const pair<l,l>& r)
    {
        if(s.second!=r.second)
        return s.second>r.second;
        

        return s.first >r.first;
    });

    l q;

    scanf("%ld",&q);

    while (q--)
    {
        scanf("%ld",&x);

        if(x<=p1.size())
        printf("%ld\n",p1[x-1].first);
        else
        {
            
        }
        
    }
    
}