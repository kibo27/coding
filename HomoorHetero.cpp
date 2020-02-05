#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int,int> m;

    int n;
    scanf("%d",&n);
      long cnt=0;
    while(n--)
    {
    char a[30];
    long x;
  
    scanf("%s %ld",a,&x);
    if(a[0]=='i')
    {
        m[x]++;
        cnt++;
    }
    else
    {
        auto it=m.find(x);

        if(it!=m.end())
        {
            m[x]--;

            if(m[x]==0)
                m.erase(x);

            cnt--;
        }
    } 

    if(m.size()==0)
    printf("neither\n");
    else if(m.size()==1)
    {
        auto it=m.begin();

        if(it->second==1)
            printf("neither\n");
        else
            printf("homo\n");
    }
    else
    {   
    if(cnt==m.size())
        printf("hetero\n");
    else
        printf("both\n");
    }

    }

}
