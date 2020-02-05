#include<bits/stdc++.h>
using namespace std;

void combine(vector<vector<int>> &x,int A,int B,vector<int> &res)
{
    if(B==0)
    {
        x.push_back(res);
        return ;
    }

    if(res.empty())
    {
       for (int i =1; i <=A; i++)
    {   
        res.push_back(i);
        combine(x,A,B-1,res);
        res.pop_back();
    }
    }
    else
    {
     for (int i =res.back()+1; i <=A; i++)
    {   
        res.push_back(i);
        combine(x,A,B-1,res);
        res.pop_back();
    }   
    }
}

vector<vector<int> > combine(int A, int B) {
vector<vector<int>> x;
vector<int> res;
combine(x,A,B,res);
return x;
}

int main()
{
    int A=2;
    int B=1;

    vector<vector<int>> x=combine(A,B);

    

    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j <x[i].size(); j++)
        {
            cout<<x[i][j]<<" ";
        }
        
        cout<<"\n";
    }
    
}