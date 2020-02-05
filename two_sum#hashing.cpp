#include<bits/stdc++.h>
using namespace std;
unordered_map <int,int> x;
vector<int> twoSum(const vector<int> &A, int B) {
    
    vector<int >res;
    
    unordered_map <int,int> x;
    
   
    
    for(int i=0;i<A.size();i++)
    {
        if(x.find(A[i])!=x.end())
        {
            res.push_back(x[A[i]]);
            res.push_back(i+1);
            return res;
        }
        else
        {   
            x.insert(make_pair(B-A[i],i+1));
        }
    }
}
int main()
{   
    vector<int> A={ 4, 7, -4, 2, 2, 2, 3, -5, -3, 9, -4, 9, -7, 7, -1, 9, 9, 4, 1, -4, -2, 3, -3, -5, 4, -7, 7, 9, -4, 4, -8};
    vector<int> c=twoSum(A,-3);
    for(int i:c)
    {
        cout<<i<<" ";
    }

    cout<<"\n";


    for (auto i=x.begin(); i!=x.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<"\n";
    }
    
}
