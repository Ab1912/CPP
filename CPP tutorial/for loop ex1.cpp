#include<iostream>
using namespace std;

int main()
{
    int i,n,tot=0,num;
    cout<<"Enter the limit of numbers to add : ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        cout<<"Enter the integer : ";
        cin>>num;
        tot=tot+num;
    }
    cout<<"Total : "<<tot;
    return 0;
}