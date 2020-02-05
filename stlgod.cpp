#include<bits/stdc++.h>
using namespace std;
template <typename T>
bool comp(T a,T b)
{
    return a>b;
}
void vector_demo()
{
vector<int> vect={100,21,3234,41,5};

    cout<< vect[1] <<endl;
    

    sort(vect.begin(),vect.end());
    
    for (int i = 0; i < vect.size(); i++)
    {
        cout<< vect[i] << "\t";        
    }

    cout<< endl;

    vect.push_back(1065);
    vect.push_back(145);
    vect.push_back(134);
    vect.push_back(100);
    vect.push_back(100);


    bool present=binary_search(vect.begin(),vect.end(),100);

    cout<< "Present::"<<present <<endl;

    present =binary_search(vect.begin(),vect.end(),100002);

    cout<< "Present::"<<present <<endl;


    sort(vect.begin(),vect.end());


    vector<int>::iterator it1=lower_bound(vect.begin(),vect.end(),100);
    vector<int>::iterator it2=upper_bound(vect.begin(),vect.end(),100);

    cout<< *it1 << " " <<*it2<<endl;

    cout<<"The differnce in the two::"<< it2-it1<<endl;
    
    //this gives the count of the number

    sort(vect.begin(),vect.end(),comp <int>);

    //else use greater<int>()

    //iterator are used to traverse the conatiners .eg..

    vector <int>::iterator it3;

    for ( it3 = vect.begin(); it3!=vect.end(); it3++)
    {
        cout<< *it3 << " ";
    }

    cout<<endl;


    //if you dont want to declare an iterator by yourself use auto

    auto it=lower_bound(vect.begin(),vect.end(),100);

    // auto takes care of the data type itself

    // and to traverse vecot just use

    for(int x:vect)
    cout<< x<<" ";

    //does same just a compact piece of code and vectors cnan  also be accesed randomaly

     /*
     for(int x:vect)
     {
         x++;                   won't change the content 
         cout<<x<<" ";
     }

     but if you iterate by reference
     i.r

     for(int &x:vect)
     {
          x++;                 definately changed the content
          cout<<x<<" ";
    }
    */

}
void set_demo()
{
    set <int> s;
    //sets internally maintain the elements ina ascending order
    //insert takes log n for insertion and u dont have to sort thats it
    //adding greater<int> puts it in ascending order
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);
    s.insert(1065);

    for (int x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl; 

    auto it=s.find(-1);
    //point to s.end() if not present

    if(it!=s.end())
    cout<<"Present\n"<<endl;
    else
    {
        cout<<"Element not present\n";
    }
       
    auto it2=s.upper_bound(-1);
    auto it3=s.lower_bound(0);

    cout<<*it2<< " " <<*it3<<endl;

    // if not available then points to s.end()


}
void map_demo()
{
    map <int,int>a;

    a[1]=100;
    a[2]=-1;
    a[10]=34;
   

    map<char,int> cnt;
    string x="Anshul meena";

    for ( char c:x)
    {
        cnt[c]++;
    }
    

    cout<<cnt['A']<<" "<<cnt['e']<<endl;
    
}
int main()
{
    map_demo();
}