#include<iostream>
#include<list>
using namespace std;

void print(list <int> x){
    for (int i : x)
    {
        cout<<i<<" ";
    }
}

int main()
{
    list <int> a={10,20,30,40};
    print(a);
    list <int> b;
    b.push_front(50);
    b.push_back(100);
    b.push_back(125);
    print(b);
    cout<<endl;
    cout<<"List First element in A : "<<a.front()<<endl;
    cout<<"List Last element in A : "<<a.back()<<endl;
    cout<<"Empty or not : "<<a.empty()<<endl;
    cout<<"Before Reverse : "<<endl;
    print(a);
    a.reverse();
    cout<<endl;
    cout<<"After Reverse : "<<endl;
    print(a);
    return 0;
}