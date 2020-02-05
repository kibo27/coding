#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,t;

    scanf("%d",&n);

    set <int> s;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);

        s.insert(x);

        scanf("%d",&t);
        
        for(int j=0;j<t;j++)
        {
            scanf("%d",&x);
            s.insert(x);
        }

    }
    
    int fof=s.size()-n;


    printf("%d\n",fof);


}