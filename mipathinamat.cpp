#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> x;
int minpath(vector<vector<int>> &A,int x,int y,int m,int n,vector<vector<int>> &temp)
{
    if(x>n||y>m)
    {   
      
        return INT_MAX;
    }
    if(x==n && y==m)
    {   
     
        return A[n][m];
    }
    
     if(temp[x][y])
    {   
        
        return temp[x][y];
    }
    
       temp[x][y]=A[x][y]+min(minpath(A,x+1,y,m,n,temp),minpath(A,x,y+1,m,n,temp));
       return temp[x][y];
    
}
int minPathSum(vector<vector<int> > &A) {
    int m=A[0].size();
    int n=A.size();
    vector<vector<int>> temp;
    temp.resize(n,vector<int>(m,0));

    return minpath(A,0,0,m-1,n-1,temp);
}
int main()
{
    vector<vector<int> > A={
       {20, 29, 84, 4, 32, 60, 86, 8, 7, 37},
  {77, 69, 85, 83, 81, 78, 22, 45, 43, 63},
  {60, 21, 0, 94, 59, 88, 9, 54, 30, 80},
  {40, 78, 52, 58, 26, 84, 47, 0, 24, 60},
  {40, 17, 69, 5, 38, 5, 75, 59, 35, 26},
  {64, 41, 85, 22, 44, 25, 3, 63, 33, 13},
  {2, 21, 39, 51, 75, 70, 76, 57, 56, 22},
  {31, 45, 47, 100, 65, 10, 94, 96, 81, 14}
  
};



cout<<minPathSum(A);
}
/*
 */