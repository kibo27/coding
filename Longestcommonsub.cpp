#include <iostream>
using namespace std;
int max(int x,int y)
{
    return (x>y)?x:y;
}
int main() {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	  
	  int m,n;
	  
	    scanf("%d %d",&m,&n);  //m and n denote the size of the strings
	    
	    string a,b;
	    cin>>a;
	    cin>>b;
	    
	  
	    
	    int mat[m+1][n+1];
	    
	    for(int i=0;i<m+1;i++)
	    {
	        mat[i][0]=0;
	    }
	    for(int j=0;j<n+1;j++)
	    {
	        mat[0][j]=0;
	    }
	    
	    for(int i=1;i<m+1;i++)
	    for(int j=1;j<n+1;j++)
	    {
	        if(a[i-1]==b[j-1])
	        {
	            mat[i][j]=mat[i-1][j-1]+1;  //if two characters are same then diagonal+1 
	        }
	        else
	        {
	            mat[i][j]=max(mat[i-1][j],mat[i][j-1]); //if note same then max of left and top element
	        }
	    }
	    
	    printf("%d\n",mat[m][n]);
	}
	return 0;
}

/*
or else we can use a recursive one
ie

int res(a,b,m,n)
{
	if(m==0||n==0)
	{
		return 0;
	}
	else if(a[m-1]==a[n-1])
	{
		return 1+res(a,b,m-1,n-1);
	}
	else
	{
		return max(res(a,b,m-1,n),res(a,b,m,n-1));
	}
}



*/