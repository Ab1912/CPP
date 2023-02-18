#include<iostream>
using namespace std;

void display();

int main()
{
    display();
    return 0;
}

void display()
{
    int a,b,c;
    cout<<"Enter 2 nos to add : ";
    cin>>a>>b;
    c=a+b;
    cout<<"Total : "<<c;
}