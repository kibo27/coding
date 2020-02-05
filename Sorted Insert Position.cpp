#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &A, int B) {
int low=0;
int high=A.size();
int res=-1;

if(B>A[A.size()-1])
return A.size();


while (low<=high)
{
  int mid=(low+high)/2;
  if(A[mid]>=B)
  {
    high=mid-1;
    res=mid;
  }
  else
  {
    low=mid+1;
  }
   
}
return res;
}

int main()
{
  vector <int> A={1,3,5,6};
  cout<<searchInsert(A,7);
}