// Program to find a value in an array
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,v;
    cout<<"Enter the limit : ";
    cin>>n;
    cout<<"\n";
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter the integer : ";
        cin>>a[i];
    }
    cout<<"Enter the value to search : ";
    cin>>v;
    for ( i = 0; i < n; i++)
    {
        if (a[i]==v)
        {
            cout<<"Value found at : "<<i<<" index";
            return 0;
        }
    }
    cout<<"Value not found";
    
    return 0;
}