#include<bits/stdc++.h>
using namespace std;

bool isallfilled(vector<vector<char>>A,int &r,int &c)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(A[i][j]=='.')
            {
                r=i;
                c=j;

               return false;
            }
        }
        
    }

    return true;
}
bool is_poss(vector<vector<char>> &A,int r,int c,int tar)
{   
     
    for (int i = 0; i < 9; i++)
    {
        if(A[r][i]==tar+'0')
        return false;

        if(A[i][c]==tar+'0')
        return false;
    }

    int xr=r-r%3;
    int xc=c-c%3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(A[xr+i][xc+j]==tar+'0')
            {
                return false;
            }
        }
        
    }
    

    return true;
}

bool solve(vector<vector<char> > &A)
{   
  int r,c;

    if(isallfilled(A,r,c))
   {    
       cout<<"Hello\n";
       return true;
   }


   cout<<"r"<<r<<" "<<"c"<<c<<"\n";

   for (int i = 1; i < 10; i++)
   {
        if(is_poss(A,r,c,i))  
        {    
            A[r][c]=i+'0';

            bool sol=solve(A);

            if(sol)
            {
                return true;
            }
            else
            {
                A[r][c]='.';
            } 
        }
   }

   return false;
}

void solveSudoku(vector<vector<char> > &A) {

    solve(A);
}

int main()
{
    vector<vector<char>> A={{'5','3','.','.','7','.','.','.','.'}, {'6','.','.','1','9','5','.','.','.'}, {'.','9','8','.','.','.','.','6','.'}, {'8','.','.','.','6','.','.','.','3'}, {'4','.','.','8','.','3','.','.','1'}, {'7','.','.','.','2','.','.','.','6'}, {'.','6','.','.','.','.','2','8','.'}, {'.','.','.','4','1','9','.','.','5'}, {'.','.','.','.','8','.','.','7','9'}} ;

    solveSudoku(A);

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            cout<<A[i][j]<<" "; 
        }
        cout<<"\n";
        
    }
    
}