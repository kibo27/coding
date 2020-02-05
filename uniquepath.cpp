#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> x;
int noofpath(vector<vector<int>> &A,int x,int y,int m,int n,vector<vector<int>> &temp)
{
    if(x>n||y>m||A[x][y]==1)
    {     
        return 0;
    }
    
    if(x==n && y==m)
    {   
        return 1;
    }
    
     if(temp[x][y])
    {   
        return temp[x][y];
    }
    
       temp[x][y]=noofpath(A,x+1,y,m,n,temp)+noofpath(A,x,y+1,m,n,temp);
       return temp[x][y];
}
int minPathSum(vector<vector<int> > &A) {
    int m=A[0].size();
    int n=A.size();
    vector<vector<int>> temp;
    temp.resize(n,vector<int>(n,0));
    return noofpath(A,0,0,m-1,n-1,temp);
}
int main()
{
    vector<vector<int> > A={
        {0, 1, 1, 0, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 1, 1}
};

cout<<minPathSum(A);
}
