#include<bits/stdc++.h>
using namespace std;
 #define ll pair<int,pair<int,int>> 
 bool issafe(int x,int y,int n,int m,vector<vector<int>> vis)
 {
     return x>=0&&y>=0&&x<n&&y<m&&vis[x][y]==0;
 }
 int call(int n,int m,int *row,int *col,int x,int y,int x2,int y2)
 {
     vector<vector<int>> vis(n,vector<int>(m,0));
     vis[x][y]=1;
     queue<ll> q;
     q.push({0,{x,y}});
     while(!q.empty())
     {
         ll tp=q.front();
         q.pop();
         if(tp.second.first==x2&&tp.second.second==y2)
         {
             return tp.first;
         }
         for(int i=0;i<8;i++)
         {
             if(issafe(row[i]+tp.second.first,col[i]+tp.second.second,n,m,vis))
             {
                 pq.push({tp.first,{row[i]+tp.second.first,row[i]+tp.second.second}});
                 vis[row[i]+tp.second.first][row[i]+tp.second.second]=1;
             }
         }
     }
     return -1;
 }
int knight(int n, int m, int x, int y, int x2, int y2) {
    int row[8]={-2,-1,1,2,2,1,-1,-2},col[8]={-1,-2,-2,-1,1,2,2,1};
    return call(n,m,row,col,x,y,x2,y2);
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