#include<bits/stdc++.h>
using namespace std;
int main()
{   
    stack <int> st;
    string s;
    cin>>s;

    long flag=0,ct=0;
    for (long i = 0; i <s.length(); i++)
    {
        if(s[i]=='(')
        {
            st.push(1);
        }
        if(s[i]==')')
        {   
            if(st.empty())
            {
                flag++;
            }
            else
            {
                st.pop();
                ct++;
            }
        }   
    }

        if(flag)
        {   
            long len=0;

            if(st.empty())
            len=s.length()-flag;
            else
            len=s.length()-flag-st.size();

            printf("%ld\n",len);
        }   
         else
        {
        if (st.empty()) 
        {
        printf("%ld\n",s.length());
        }       
         else
        {
           long len=s.length()-st.size();

            printf("%ld\n",len);
        }
}   
}