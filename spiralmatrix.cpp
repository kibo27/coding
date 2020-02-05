#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(const vector<vector<int> > &A) {
  int T=0;
    int L=0;
    int B=A.size()-1;
    int R=A[0].size()-1;

    int dir=0;

while (T<=B && L<=R)
{
    if(dir==0)
    {   
        for (int i = L; i <=R; i++)
        {
            cout<<A[T][i]<<" ";
        }
        T++;
        dir++;
    }
    else if(dir==1)
    {
        for (int i = T; i <=B; i++)
        {
            cout<<A[i][R]<<" ";
        }
        R--;
        dir++;
    }
    else if(dir==2)
    {   for (int i = R; i >=L; i--)
    {
            cout<<A[B][i]<<" ";
    }
        B--;
        dir++;
    }
    else if(dir==3)
    {
        for (int i = B; i >=T; i--)
        {
            cout<<A[i][L]<<" ";
        }
        
        L++;
        dir=0;
    }
}
vector <int> x;

return x;
}
int main()
{
 vector<vector<int>>A{{1,2},{3,4},{5,6}};

  spiralOrder(A);

}
/*
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> spiralOrder(int A) {
  int T=0;
    int L=0;
    int B=2*A-2;
    int R=2*A-2;

    int dir=0;
    int f=-1;

  int size = 2*A-1;
vector<vector<int>> x;
x.resize(size);

for(int i = 0; i < size; ++i)
    x[i].resize(size);

while (T<=B && L<=R)
{
    if(dir==0)
    {   
        f++;
        for (int i = L; i <=R; i++)
        {
            x[T][i]=A-f;
        }
        T++;

    }
    else if(dir==1)
    {
        for (int i = T; i <=B; i++)
        {
            x[i][R]=A-f;
        }
        R--;

    }
    else if(dir==2)
    {   for (int i = R; i >=L; i--)
    {
            x[B][i]=A-f;
    }
        B--;
        
    }
    else if(dir==3)
    {
        for (int i = B; i >=T; i--)
        {
            x[i][L]=A-f;
        }
        
        L++;
        
    }

    dir=(dir+1);
    dir%=4;
}

return x;
}
int main()
{
    int A;
    cin>>A;


  vector<vector<int>>x=spiralOrder(A);

  for (int i = 0; i < x.size(); i++)
{
    for (int j = 0; j < x[i].size(); j++)
    {
        cout << x[i][j]<<" ";
    }

    cout<<"\n";
}


}
*/