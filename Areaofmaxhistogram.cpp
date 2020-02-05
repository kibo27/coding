#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &A) {

  vector <int> forward(A.size(),-1);
  vector <int> backward(A.size(),-1);
  stack <int> s;

  for (int i = 0; i < A.size(); i++)
  {
    while (!s.empty() && A[i]<A[s.top()])
    { 

        forward[s.top()]=i;
        s.pop();
    }

    s.push(i);
    
  }

  
  for (int i = A.size()-1; i >= 0; i--)
  {
    while (!s.empty() && A[i]<A[s.top()])
    { 

        backward[s.top()]=i;
        s.pop();
    }

    s.push(i);
    
  } 


  int max=INT_MIN; 


  for (int i = 0; i < A.size(); i++)
  { 
      int l,r;
      if(forward[i]==-1)
      {
        l=A.size();
      }
      else
      {
        l=forward[i];
      }


      r=backward[i];


      cout<<l<<" "<<r<<"\n";

      if(max<(l-r-1)*A[i])
      {
        max=(l-r-1)*A[i];
      }


      
  }
  

  return max;
}


int main()
{
  vector <int> A={2,1,5,6,2,3};
  cout<<largestRectangleArea(A);
} 