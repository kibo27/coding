#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{   
  if(b==0)
    return a;

  return gcd(b,a%b);
}
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n,q;

        scanf("%d %d",&n,&q);

        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }

        vector <int> pgc(n);

        vector <int> bgc(n);

        pgc[0]=a[0];

        for (int i = 1; i < n; i++)
        {
            pgc[i]=gcd(pgc[i-1],a[i]);
        }
        
        bgc[n-1]=a[n-1];

        for (int i = n-2; i >=0; i--)
        {
            bgc[i]=gcd(bgc[i+1],a[i]);
        }
        
        while(q--)
        {   
            int x=0;
            int l,r;

            scanf("%d %d",&l,&r);
            
            int g,h;

            if(l==1)
                g=0;
            else
                g=pgc[l-2];

            if(r==n)
                h=0;
            else
                h=bgc[r];

            printf("%d\n",gcd(g,h));
        }

    }
}   