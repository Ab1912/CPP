#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;

    if (a>b)
    {
        cout<<a<<" is greatest number"<<endl;
    }
    if (a<b)
    {
        cout<<b<<" is greatest number"<<endl;
    }
    if (a==b)
    {
        cout<<"A"<<" and "<<"B"<<" are equal"<<endl;
    }
    
    
    return 0;
}
