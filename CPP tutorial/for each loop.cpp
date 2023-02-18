#include<iostream>
using namespace std;

int main()
{
    int a[] = {84,65,45,98,32,68},i;

    cout<<"For loop"<<endl;
    for ( i = 0; i <= 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
    cout<<"For Each loop"<<endl;
    for ( auto x : a) // auto keywood is used to automatically assign datatype
    {
        cout<<x<<endl;
    }
    
    return 0;
}