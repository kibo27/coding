#include<bits/stdc++.h>
using namespace std;
bool ispallindrome(int low,int high,string s)
{
    while (low<high)
    {
        if(s[low]==s[high])
        {
            low++;
            high--;
        }
        else
        {
            return false;
        }
        
    }

    return true;
    
}
void allp(vector<vector<string>> &allpart,vector<string> &curpar,int start,int length,string A)
{
    if(start>=length)
    {
        allpart.push_back(curpar);
        return;
    }

    for (int i =start; i <length; i++)
    {
            if(ispallindrome(start,i,A))
            {   
                curpar.push_back(A.substr(start,i-start+1));
                allp(allpart,curpar,i+1,length,A);
                curpar.pop_back();
            }
    }
    
}
vector<vector<string>> partition(string A) {

    vector<vector<string>> allpart;
    vector<string> curpart;

    allp(allpart,curpart,0,A.length(),A);

    return allpart;
  }

int main()
{   
    string A="aab";

    vector<vector<string>> x=partition(A);

    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}