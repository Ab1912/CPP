#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i=0,n;
    cout<<"Enter the limit : ";
    cin>>n;
    //cout<<"Even numbers"<<endl;
    do
    {
        if(i%2==0)
        cout<<i<<endl;
        i++;       
    } while (i<=n);
    
    return 0;
}
