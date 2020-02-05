#include<bits/stdc++.h>
using namespace std;
int isValidSudoku(const vector<string> &A) {

    if(A.size()!=9)
    {
        return 0;
    }

     for (int i = 0; i < A.size(); i++)
     {
         if(A[i].length()!=9)
         {
             return 0;
         }
     }
        
         
    for (int i = 0; i < 9; i++)
    {   
        unordered_map <int,int> col;
       
        
        for(int j=0;j<9;j++)
        {   
            if( A[j][i]=='.')
            {
                continue;
            }
            else
            {
            if(col.find(A[j][i]-'0')==col.end())
                col[A[j][i]-'0']=1;
            else
                return 0;
          }
        }
    }
        for (int i = 0; i < 9; i++)
    {   
        unordered_map <int,int> row;
       
        
        for(int j=0;j<9;j++)
        {   
            if(A[i][j]=='.' )
            {
                continue;
            }
            else
            {   
            if(row.find(A[i][j]-'0')==row.end())
                row[A[i][j]-'0']=1;
            else
                return 0;
            }
        }
    }

    

    for(int i=0;i<=6;i+=3)
    {
        for(int j=0;j<=6;j+=3)
        {   
            unordered_map <int,int> box;
             for (int k = 0; k < 3;k++)
                {
                    for (int l = 0; l < 3; l++)
                {
                    if(A[i+k][j+l]=='.')
                    {
                        continue;
                    }
                    else
                    {   
                        if(box.find(A[i+k][j+l]-'0')==box.end())
                        box[A[i+k][j+l]-'0']=1;
                        else
                        return 0;
                    }
                }
        
                }
        }
    }
    

    return 1;
}
int main()
{
    vector<string> A={"53..7....", "6..195...", "598....6.", "8...6...3", "4..8.3..1", "7...2...6", ".6....28.", "...419..5", "....8..79"} ;

    cout<<isValidSudoku(A);
}