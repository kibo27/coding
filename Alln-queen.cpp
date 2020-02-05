#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> ga;
bool is_poss(vector<int> s,int row,int c)
{ 
  for (int i = 0; i < row; i++)
  {
    if(s[i]==c)
    return false;

    if(abs(row-i)==abs(s[i]-c))
      return false;
  }
  
  return true;
}

int slve(vector<int>s,int r)
{
  if(r>s.size()-1)
  {
    ga.push_back(s);
  }

  for (int i = 0; i < s.size(); i++)
  {
    if(is_poss(s,r,i))
    {
      s[r]=i;
      slve(s,r+1);
    }
  }
  
  return 0;
}
vector<vector<string>> solveNqueens(int A)
{
  n=A;
  ga.clear();
  vector<int>s(A,0);
  slve(s,0);

  vector<vector<string>> one;  

  for (int i = 0; i < ga.size(); i++)
  { vector<string> on;
    for (int j = 0; j < ga[i].size(); j++)
    {
        string o;

    for (int k = 0; k < A; k++)
    { 
      if(k==ga[i][j])
      o.push_back('Q');
      else
      o.push_back('.');
    }
      on.push_back(o);
    }

    one.push_back(on);
  }
  

  return one;
}
int main()
{ 
  
    vector<vector<string>> x=solveNqueens(4);

   for (int i = 0; i < x.size(); i++)
   {
      for (int j = 0;j<x[i].size(); j++)
      {
          cout<<x[i][j]<<"\n";
      }
      
   }
   

}