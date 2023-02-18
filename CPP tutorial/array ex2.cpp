// Program to add sum of numbers in an array

#include<iostream>
using namespace std;

int main()
{
    int a[100], i,n,sum=0;
    cout<<"Enter the limit : ";
    cin>>n;
    cout<<"\n";

    for ( i = 0; i < n; i++)
    {
        cout<<"Enter the integer : ";
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"\nSum of Array numbers : "<<sum;
    return 0;
}