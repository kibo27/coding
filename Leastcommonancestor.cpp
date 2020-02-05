#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
bool path(TreeNode* root,int x,vector<int> &pa)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->val==x)
    {
     pa.push_back(x);
     
     return true;
    }
    else
    {   
        pa.push_back(root->val);

        bool x1=path(root->left,x,pa);
        bool x2=path(root->right,x,pa);
        if(x1||x2)
        {
            return true;
        }
        else
        {
            pa.pop_back();
            return false;
        }
    
    }
}

int lca(TreeNode* A, int B, int C) {
    
    vector<int> path1;
    
    bool t1=path(A,B,path1);

    if(t1==false)
    {
        return -1;
    }

    vector<int> path2;
    
    bool t2=path(A,C,path2);

    if(t2==false)
    {
        return -1;
    }

    int ans=0;

    reverse(path1.begin(),path1.end());
    reverse(path2.begin(),path2.end());

    while (!path1.empty() && !path2.empty() && path1.back()==path2.back())
    {
        ans=path1.back();    
        path1.pop_back();
        path2.pop_back();

    }
    
    
    return ans;
    
}

int main()
{
TreeNode *root1=(TreeNode*)malloc(sizeof(TreeNode));
root1->val=1;
root1->right=root1->left=NULL;  


    cout<<lca(root1,1,1);
}