#include <bits/stdc++.h>
using namespace std;
int sol(int val[],int w,int n)
{
    int dp[w+1];

    
}
int main() {
    
    char a[5000];

	while(1)
	{
        scanf("%s",a);

           
	    
        int n=strlen(a);
        
        int dp[n];
        dp[0]=1;


        for (int i = 1; i < n; i++)
        {   
            dp[i]=0;

            int j=(a[i-1]-'0')*10+(a[i]-'0');


            if(a[i]-'0')
            {
                dp[i]=dp[i-1];
            }   
            if(j>9 && j<27)
            {   
                if(i==1)
                dp[i]=dp[i]+1;
                else
                dp[i]+=dp[i-2];
            }
        }

        if(strlen(a)==1)
            if((a[0]-'0')==0)
                     break;   

        printf("%d\n",dp[n-1]);
        



	}
	
	return 0;
}