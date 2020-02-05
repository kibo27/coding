#include<bits/stdc++.h>
using namespace std;
void combine(vector<string> &x,string res, int A,int open,int close)
{
    if(close==A)
    {
        auto it=find(x.begin(),x.end(),res);

        if(it==x.end())
        x.push_back(res);

        return;
    }

    if(open>close)
    {
        res.push_back(')');
        combine(x,res,A,open,close+1);
        res.pop_back();
    }

    if(open<A)
    {
        res.push_back('(');
        combine(x,res,A,open+1,close);
        res.pop_back();
    }
    

}
vector<string> generateParenthesis(int A) {

    vector<string> x;
    string res;

    combine(x,res,A,0,0);

    return x;
}
int main()
{   

    vector<string> x=generateParenthesis(3);
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i];
        
        cout<<"\n";
    }
    
}