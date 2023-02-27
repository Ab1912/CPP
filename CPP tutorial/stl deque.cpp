#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> d={10};
    d.push_back(25);
    d.push_front(5);
    cout<<"D elements : ";
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<"\nSize : "<<d.size()<<endl;
    cout<<"Empty or not : "<<d.empty()<<endl;
    cout<<"Element at 2 index : "<<d.at(2)<<endl;
    d.pop_front();// pop front element
    d.pop_back(); // pop last element
    cout<<"D elements : ";
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}