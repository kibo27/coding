#include<bits/stdc++.h>
using namespace std;
int mergesort(int arr[],int left,int mid,int right,int temp[])
{
    int i=left;
    int j=mid;
    int k=left;
    int inv_ct=0;

    while((i<=mid-1)&&(j<=right))
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
            inv_ct+=mid-i;;
        }
    }

    while(i<=mid-1)
    {
         temp[k++]=arr[i++];
    }

    while(j<=right)
    {
        temp[k++]=arr[j++];
    }

    for(int i=left;i<=right;i++)
    {
        arr[i]=temp[i];
    }

    return inv_ct;
}
int _merge(int a[],int left,int right,int temp[])
{
    int inv_ct=0;
    if(right>left)
    {
        int mid=left+right/2;

        inv_ct+=_merge(a,left,mid,temp);
        inv_ct+=_merge(a,mid+1,right,temp);
        
        mergesort(a,left,mid,right,temp);
    }
    return inv_ct;
}

int mergesort(int a[],int size)
{
    int temp[size];
    return _merge(a,0,size-1,temp);
}

void solve()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   cout<<mergesort(a,n)<<"\n";
}
int main() {
	ios::sync_with_stdio(false);
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    solve();
	}
}