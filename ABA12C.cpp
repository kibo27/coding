#include <iostream>
using namespace std;
int sol(int val[],int w,int n)
{
    int dp[w+1];

    dp[0]=0;
    
    for(int i=1;i<=w;i++)
    {
        dp[i]= INT32_MAX;
        
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                dp[i]=min(dp[i],dp[i-j]+val[j]);
            }
        }
    }


    
    if(dp[w]==INT32_MAX)
        return -1;
    else
        return dp[w];
    
}
int main() {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,w;
	    scanf("%d %d",&n,&w);
	    
	    int val[n+1];
	    
        val[0]=-1;

	    for(int i=1;i<=n;i++)
	    {
	        scanf("%d",&val[i]);
	    }
	    
	    
	    printf("%d\n",sol(val,w,n));
	}
	
	return 0;
}