#include<bits/stdc++.h>
using namespace std;
/*
*** MY SOLUTION ***
vector<vector<int> > permute(vector<int> &A) {
    
    int s=A.size();
    
    vector<vector<int>> x;
    
    x.push_back(A);
  
    while(s>1)
    {
        int rep=A.size()-s;
        int len=x.size();
        
        for(int i=0;i<len;i++)
        {
            int j=rep+1;
            
            while(j<x[i].size())
            {
                int temp=x[i][rep];
                x[i][rep]=x[i][j];
                x[i][j]=temp;
                
                
                x.push_back(x[i]);
                
                temp=x[i][rep];
                x[i][rep]=x[i][j];
                x[i][j]=temp;
                
                j++;
            }
        }

     s--;
    }
    
    
    return x;
}
*/
void permute(vector<int> &num,int start,vector<vector<int>> &res)
{
    if(start==num.size()-1)
    {
        res.push_back(num);
        return;
    }

    for (int i = start; i < num.size(); i++)
    {
        swap(num[start],num[i]);
        permute(num,start+1,res);
        swap(num[start],num[i]);
    }
    
}
vector<vector<int>> permute(vector<int> x)
{
    vector<vector<int>> res;
    if(x.size()==0)
    return res;

    permute(x,0,res);  
    return res;
}
int main()
{
    vector<int> A={1,2,3,4};
    vector<vector<int>> x=permute(A);

   for(int i=0;i<x.size();i++)
    {
        for(int j=0;j<x[i].size();j++)
        {
            cout<<x[i][j]<<" ";
        }

        cout<<"\n";
    }
    
    
}