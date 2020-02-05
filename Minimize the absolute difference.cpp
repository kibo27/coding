#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, vector<int> &B, vector<int> &C) {
  int a=A.size();
  int b=B.size();
  int c=C.size();

  int i=0,j=0,k=0;
  int diff=INT_MAX; 

  while (1)
  {
    int x=A[i];
    int y=B[j];
    int z=C[k];

    int MA=x>y?(x>z?x:z):(y>z?y:z);
    int MI=x<y?(x<z?x:z):(y<z?y:z);

    if(MA-MI<diff)
    {
      diff=MA-MI;
    }

    if(MI==x && i<a)
    {
      i++;
    }
    else if(MI==y && j<b)
    {
      j++;
    }
    else if(MI==z && k<c)
    {
      k++;
    }
    else
    {
      break;
    }
    

  }

  return diff;
  
}

int main()
{
  vector <int> A={-1};
  vector <int> B={-2};
  vector <int> C={-3};
  cout<<solve(A,B,C);
}