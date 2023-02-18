// Greatest number in an array
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,g;
    cout<<"Enter the Limit : ";
    cin>>n;
    cout<<"\n";
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter the integer : ";
        cin>>a[i];
    }
    g=a[0];
    for ( i = 0; i < n; i++)
    {
        if (g<a[i])
        {
            g=a[i];
        }
        
    }
    cout<<"\nGreatest number is : "<<g<<"\n";
    return 0;
}