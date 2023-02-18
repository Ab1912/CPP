#include<iostream>
using namespace std;
void swap(int &a,int &b);

int main()
{    
    int x=20, y=30;
    cout<<"Before swap X: "<<x<<" | Y : "<<y<<endl;
    swap(x,y);
    cout<<"After swap X: "<<x<<" | Y : "<<y<<endl;
    return 0;
}

void swap(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}