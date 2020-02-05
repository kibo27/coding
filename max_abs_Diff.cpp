#include<bits/stdc++.h>
using namespace std;
int maxArr(vector<int> &A) {

    int maxa=INT_MIN;
    int maxs=INT_MIN;
    int mina=INT_MAX;
    int mins=INT_MAX;
    
    for(int i=0;i!=A.size();i++)
    {
        maxa=(maxa>A[i]+i)?maxa:A[i]+i;
        mina=(mina<A[i]+i)?mina:A[i]+i;
        maxs=(maxs>A[i]-i)?maxs:A[i]-i;
        mins=(mins<A[i]-i)?mins:A[i]-i;
    }
    
    int max1=maxa-mina;
    
    int max2=maxs-mins;

    cout<<"MAX1 "<<max1<<endl;
    cout<<"MAX2 "<<max2<<endl;
    
    
    int max_abs=max1>max2?max1:max2;
    
    return max_abs;
}


int main()
{
 vector<int>A{ -39, -24, 82, 95, 91, -65, 16, -76, -56, 70};

int x= maxArr(A);

 
  cout<<x<<" ";
 
 

}