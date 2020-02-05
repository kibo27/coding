#include<bits/stdc++.h>
using namespace std;

void combine(vector<string> &x,string res,string A,map<int,string> ma,int s)
{
    if(s==A.length())
    {
        x.push_back(res);
        return;
    }
    
    string temp=ma[A[s]-'0'];
    
    for(int i=0; i<temp.length();i++)
    {
        res.push_back(temp[i]);
        combine(x,res,A,ma,s+1);
        res.pop_back();
    }
}
vector<string> letterCombinations(string A) {

    vector<string> x;
    string res;
    map<int,string> ma;
    ma[1]="1";
    ma[0]="0";
    ma[2]="abc";
    ma[3]="def";
    ma[4]="ghi";
    ma[5]="jkl";
    ma[6]="mno";
    ma[7]="pqrs";
    ma[8]="tuv";
    ma[9]="wxyz";
    
    combine(x,res,A,ma,0);

    return x;
}


int main()
{   

    vector<string> x=letterCombinations("2");
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i];
        
        cout<<"\n";
    }
    
}