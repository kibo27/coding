#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int ax(int a,char s[])
{   
  int x=0;

  for (int i =0; i<strlen(s); i++)
  {     
      
      x=x*10+(s[i]-'0');
        x=x%a;
  }

  return x;
  
}
int main()
{
    ll t;

    scanf("%lld",&t);
    
    while(t--)
    {
       int a,x=0;
       char s[250];


       cin>>a>>s;

       if(a==0)
       {
           printf("%s\n",s);
           continue; 
       }
       
       if(s[0]=='0')
       {
           printf("%d\n",a);
           continue;
       }
       


       for(int i=2;i<=a;i++)
       {
           if(a%i==0)
            if(ax(i,s)==0)
            {
                x=i;
            }
       }

       if(x==0)
       printf("1\n");
       else
       printf("%d\n",x);

    }
}