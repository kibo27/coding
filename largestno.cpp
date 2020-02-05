#include<bits/stdc++.h>
using namespace std;
int maxSpecialProduct(vector<int> &A) {
long long int mod=1000000007;
vector<int> left(A.size(),0);
vector<int> Right(A.size(),0);

stack <int>s;

for (int i = 0; i < A.size(); i++)
{
  while (!s.empty() && A[i]>A[s.top()-1])
  {
    int r=s.top();
    s.pop();

    left[r-1]=i+1;
  }
  
  s.push(i+1);
}

for (int i =A.size()-1; i >=0; i--)
{
    while (!s.empty() && A[i]>A[s.top()-1])
  {
    int r=s.top();
    s.pop();

    Right[r-1]=i+1;
  }
  
  s.push(i+1);
}


int mx=INT_MIN;
for (int i = 0; i <A.size(); i++)
{
  int ans=((left[i]%mod)*(Right[i]%mod));
  mx=mx>ans?mx:ans;
}

return mx;
}


int main()
{
 
 vector <int> a={5, 9, 6, 8, 6, 4, 6, 9, 5, 4, 9};
  int x=maxSpecialProduct(a);

  cout<<x<<" ";
}