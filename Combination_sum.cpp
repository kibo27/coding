#include<bits/stdc++.h>
using namespace std;

void combine(vector<vector<int>> &x,vector<int> &res,vector<int> &A,int B,int start)
{

    if(B==0)
    {   
        auto it=find(x.begin(),x.end(),res);

        if(it==x.end())
        x.push_back(res);
        
        return;
    }
    if(start==A.size()||B<0)
    {
        return;
    }
    for (int i=start; i <A.size(); i++)
    {
        res.push_back(A[i]);
        combine(x,res,A,B-A[i],i);
        res.pop_back();
    }  

}

vector<vector<int>>combinationSum(vector<int> &A, int B)
{
    vector<vector<int>> x;
    vector<int> res;
    sort(A.begin(),A.end());
    combine(x,res,A,B,0);
    return x;
}


int main()
{
    vector<int> A={ 8, 10, 6, 11, 1, 16, 8 };
    int B=28;

    vector<vector<int>> x=combinationSum(A,B);

    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j <x[i].size(); j++)
        {
            cout<<x[i][j]<<" ";
        }
        
        cout<<"\n";
    }
    
}