#include<iostream>
using namespace std;

int main()
{
    int num,pr,i;
    cout<<"Enter the number : ";
    cin>>num;

    for ( i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            pr++;
        }
        else
        {
            continue;
        }    
    }
    if (pr==2)
    {
        cout<<num<<" is a Prime number"<<endl;
    }
    else
    {
        cout<<num<<" is not a Prime number"<<endl;
    }
    
    
    return 0;
}