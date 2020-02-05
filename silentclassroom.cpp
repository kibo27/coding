#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    scanf("%d",&n);

    string a[n];

    int ch[26]={0};

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
     
        ch[a[i][0]-'a']++;
    }

    int total=0;



    for(int i=0;i<26;i++)
    {   

        if(ch[i]!=0)
        {
     
        
        int temp1=floor(ch[i]/2);
        int temp2=ch[i]-temp1;

    

        temp1=temp1-1;
        temp2=temp2-1;

        while(temp1>0)
        {
            total=total+temp1;
            temp1--;
        }


        while(temp2>0)
        {
            total=total+temp2;
            temp2--;
        }
        }
    }
        printf("%d",total);
}