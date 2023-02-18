#include<iostream>
using namespace std;

//Program to find factors of a given number
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Factor numbers"<<endl;
    for ( int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}