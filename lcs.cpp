/*Optimal substructure for this case would be

If last characters of both sequences match (or X[m-1] == Y[n-1]) then
L(X[0..m-1], Y[0..n-1]) = 1 + L(X[0..m-2], Y[0..n-2])

else

If last characters of both sequences do not match (or X[m-1] != Y[n-1]) then
L(X[0..m-1], Y[0..n-1]) = MAX ( L(X[0..m-2], Y[0..n-1]), L(X[0..m-1], Y[0..n-2]) )
*/

int max(int a,int b)
{
    return (a>b)?a:b;
}

int LCS(char x[],char y[],int m,int n)
{
    if(m==0||n==0)
        return 0;
    if(x[m-1]==y[n-1])
        return 1+LCS(x,y,m-1,n-1);
    else
    {
        return max(LCS(x,y,m-1,n),LCS(x,y,m,n-1));
    }
    
}