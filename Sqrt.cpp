#include<bits/stdc++.h>
using namespace std;
int sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int x=0;
    int y=A;
    int ans=0;
    
    while(y>=x)
    {
        int mid=(x+y)/2;
        if((long long int)mid*mid<=A)
        {
            x=mid+1;
            ans=mid;
        }
        else if((long long int)mid*mid>A)
        {
            y=mid-1;
        }  
    }

return ans;
}

int main()
{
  int A=930675566;
  cout<<sqrt(A);
}