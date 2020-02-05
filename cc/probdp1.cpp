#include<bits/stdc++.h>
using namespace std;
struct stud
{
    int mark;
    string name;
};
bool comparator(stud a,stud b)
{
    if(a.mark==b.mark)
        return a.name<b.name;
    return (a.mark>b.mark);
}
int main()
{
    int n;

    scanf("%d",&n);

    stud a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].name;
        scanf("%d",&a[i].mark);
    }

    sort(a,a+n,comparator);

    
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<"\t"<<a[i].mark<<"\n";
    }
}