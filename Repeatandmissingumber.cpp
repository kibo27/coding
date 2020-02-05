#include<bits/stdc++.h>
using namespace std;
void repeatedNumber(const vector<int> &A) {
    
long sum=0,sumsqr=0;

for (long i = 0; i <A.size(); i++)
{
    sum+=A[i];
    sum-=i+1;

    sumsqr+=A[i]*A[i];
    sumsqr-=(i+1)*(i+1);
}

    sumsqr/=sum;
    long a=(sum+sumsqr)/2;
    long b=sumsqr-a;


    cout<<a<<" "<<b;
}


int main()
{
 vector<int>A{ 3, 1, 2, 3, 5};

 repeatedNumber(A);
}