#include<bits/stdc++.h>
using namespace std;
int pow(int x, int n, int d) {

  if(n==0)
  return 1;
  else if(n%2==0)
  {
    return ((long long int)pow(x,n/2,d)*(long long int)pow(x,n/2,d))%d;
  }
  else
  { 
    if(x>0)
    return ((x%d)*((long long int)pow(x,n/2,d)%d*(long long int)pow(x,n/2,d)%d)%d%d)%d;
    else
    {
      return ((x+d)*((long long int)pow(x,n/2,d)%d*(long long int)pow(x,n/2,d)%d)%d%d)%d;
    }
    
  }
  
  
  
}

int main()
{
int x= 71045970;
int n= 41535484;
int d= 64735492;
  cout<<pow(x,n,d);
}