#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter the A value : ";
    cin>>a;
    cout<<"Enter the B value : ";
    cin>>b;
    cout<<"Total : "<<a+b;
    cout<<"\n-----------------\n";

    string c;
    cout<<"Enter the string : ";
    cin>>c;
    cout<<c;
    cout<<"\n-----------------\n";

    fflush(stdin);  

    string d;
    cout<<"Enter the string : ";
    getline(cin,d);
    cout<<d;

    return 0;
}
