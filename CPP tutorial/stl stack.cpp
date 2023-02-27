#include<iostream>
#include<stack>
using namespace std;
void print(stack <int> a)
{
    while (!a.empty())

    {
        cout<<a.top()<<" ";
        a.pop();
    }
}

int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"Stack Empty or not : "<<s.empty()<<endl;
    cout<<"Size of stack : "<<s.size()<<endl;
    print(s);
    cout<<endl;
    return 0;
}