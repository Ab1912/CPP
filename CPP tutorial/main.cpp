
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,t;
    cout<<"Enter the Limit : ";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter the integer : ";
        cin>>a[i];
    }
    t=a[0];
    for ( i = 0; i < n; i++)
    {
        if (t<a[i])
        {
            t=a[i];
        }
    }
    cout<<"\nGreatest number is : "<<t;
    
    return 0;
}