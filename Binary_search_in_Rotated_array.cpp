#include<bits/stdc++.h>
using namespace std;
int bsrch(const vector<int> &A,int low,int high,int B)
{
  while (low<=high)
  {
    int mid=(low+high)/2;

    if(A[mid]==B)
    {
      return mid;
    }
    else if(A[mid]<B)
    {
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
    
  }

  return -1;
  
}
int search(const vector<int> &A, int B) {

  int low=0;
  int high=A.size()-1;
  while (low<=high)
  {
    int mid=(low+high)/2;
    int flag=0;
    if(A[low]<A[mid])
    {
      flag=1;
      if(B>=A[low] && B<=A[mid])
      {
        return bsrch(A,low,mid,B); 
      }

       low=mid+1;
    }
    if(flag!=1)
    {
    if (A[mid]<A[high])
    {
      if(B>=A[mid] && B<=A[high])
      {
        return bsrch(A,mid,high,B);
      }

      high=mid-1;
    }

    }
  
}
}
int main()
{
vector<int> A={9, 10, 11, 12, 14, 15, 17, 19, 24, 25, 30, 39, 40, 44, 46, 48, 51, 53, 54, 56, 59, 60, 69, 70, 73, 75, 80, 87, 88, 89, 92, 93, 97, 99, 104, 107, 109, 110, 111, 117, 123, 124, 125, 126, 127, 128, 135, 136, 137, 141, 148, 153, 154, 161, 166, 167, 169, 175, 177, 180, 181, 182, 185, 186, 189, 193, 198, 202, 1, 2, 6, 7};
int B=198;
  cout<<search(A,B);
}