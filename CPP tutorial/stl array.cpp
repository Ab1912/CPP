#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5> a = {10,20,30,40,50};
    array <int,5> b = {100,200,300,400,500};
    cout<<"Array Values"<<endl;
    for (int i : a)
    {
        cout<<i<<" ";// Output array values
    }
    cout<<"\nSize of an Array : "<<a.size()<<endl;// Size of an array
    cout<<"Array Element at 3 index : "<<a.at(3)<<endl;// To find element in a index
    cout<<"Array empty or not : "<<a.empty()<<endl;//To find array element empty or not
    cout<<"Array first element : "<<a.front()<<endl;//To find array first element
    cout<<"Array Last element : "<<a.back()<<endl;//To find array last element
    a.swap(b);
    cout<<"Elements of B after swapping"<<endl;
    for (int i : b)
    {
        cout<<i<<" ";
    }
    array <int,5> c;
    cout<<"\n";
    c.fill(10);// to fill element
    for (int i : c)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}