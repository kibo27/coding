#include<bits/stdc++.h>
using namespace std;
int isPalindrome(int A) {
    if(A<0)
    return 0;


    int j=0;
    int x=A;
    
    while(x)
    {
        j++;
        x=x/10;
    }
    
    int i=1;
    int flag=0;
    while(i<j)
    {
        int a=A%((int)pow(10,i));
       
        a=a/((int)pow(10,i-1));

        int b=A%((int)pow(10,j));
        
        b=b/((int)pow(10,j-1));
        


        if(a!=b)
        {
            flag=1;
            break;
        }
        
        i++;
        j--;
    }
    
    if(flag==1)
    return 0;
    else
    return 1;
}

int main()
{
  int A=-2147447412;
  cout<<isPalindrome(A);
}
