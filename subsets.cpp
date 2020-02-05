#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > subsets(vector<int> &A) {
    int len=A.size();

    vector<vector<int>> x;
    sort(A.begin(),A.end());
      
    for (int i = 0; i < pow(2,len); i++)
    { 
        vector<int> res;
        int t=i;
        int j=0;

        while(t)
        {
            if(t&1)
            {
                res.push_back(A[j]);   
            }
            t=t>>1;
            j++;
        }
        
     
        x.push_back(res);
        res.clear();

    }

    sort(x.begin(),x.end());

    return x;
    
}
int main()
{
    vector<int> A={1,2,3};

    vector<vector<int>> x=subsets(A);

    cout<<"Hello"<<"\n";

    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j <x[i].size(); j++)
        {
            cout<<x[i][j]<<" ";
        }
        
        cout<<"\n";
    }
    
}