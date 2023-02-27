#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    vector <int> a;
    cout<<"Capacity : "<<a.capacity()<<endl;
    a.push_back(10);
    cout<<"Capacity : "<<a.capacity()<<endl;
    a.push_back(20);
    cout<<"Capacity : "<<a.capacity()<<endl;
    a.push_back(30);
    cout<<"Capacity : "<<a.capacity()<<endl;
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Vector element at 2 index : "<<a.at(2)<<endl;
    cout<<"First element : "<<a.front()<<endl;
    cout<<"Last element : "<<a.back()<<endl;
    cout<<"Before pop function : "<<endl;
    for (int i : a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    a.pop_back();//to delete last element in a vector
    cout<<"After pop function : "<<endl;
    for (int i : a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size before clear function : "<<a.size()<<endl;
    a.clear();//to clear elements in a vector
    cout<<"Size after clear function : "<<a.size()<<endl;
    cout<<"Capacity after clear function : "<<a.size()<<endl;

    vector <int> b(5,10);
    cout<<"B elements : ";
    for (int i : b)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector <int> c(b);// to copy elements to another vector
    cout<<"C elements : ";
    for (int i : c)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (auto i = c.begin(); i != c.end(); i++)// output second method
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    vector <int> d(5,20);
    cout<<"D elements before swap : ";
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.swap(c);
    cout<<"D elements after swap : ";
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}