#include<bits/stdc++.h>
using namespace std;
long pro(int A,int high,int low)
{   
    int t=A/(int)pow(10,low);
    t=t%(int)pow(10,high);
    
 

    long long prod =1;
    
    while(t)
    {
        prod*=t%10;
        t=t/10;
    }
    
    return prod;
}

int colorful(int A) {
    int len=0;
    int x=A;
    
    while(x)
    {
        x=x/10;
        len++;
    }

   
    
    vector <long> prod;    
        
    for (int i = 0; i <len; i++)
    {
         for (int j = 1; j<=len-i; j++)
         {
            long sp=pro(A,j,i);
             if(find(prod.begin(),prod.end(),sp)==prod.end())
             {
                 prod.push_back(sp);
             }
             else
             {
                 return 0;
             }
             
         }     
    }
    
    return 1;
}
int main()
{
    int x=colorful(1221);
    cout<<"x::"<<x;
}
