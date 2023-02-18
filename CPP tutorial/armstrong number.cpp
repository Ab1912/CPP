#include<iostream>
using namespace std;

int main()
{
    cout<<"Program to find Armstrong number"<<endl;
    cout<<"Method 1"<<endl;
    int a,b,c,num,arm;
    cout<<"Enter a 3 digit number : ";
    cin>>num;

    a=num%10;
    b=num/10; b=b%10;
    c=num/100;
    arm=(a*a*a)+(b*b*b)+(c*c*c);
    if (num==arm)
    {
        cout<<num<<" is a Armstrong number"<<endl;
    }
    else
    {
        cout<<num<<" is not a Armstrong number"<<endl;
    }
    cout<<"\n--------------------\n";

    cout<<"Method 2"<<endl;
    int x,num2,arm2,sum=0;
    cout<<"Enter the 3 digit number : ";
    cin>>num2;
    arm2=num2;

    while (arm2>0)
    {
        x=arm2%10;
        sum=sum+(x*x*x);
        arm2=arm2/10;
    }

    if (num2==sum)
    {
        cout<<num2<<" is a Armstrong number"<<endl;
    }
    else
    {
        cout<<num2<<" is not a Armstrong number"<<endl;
    }
     
    return 0;
}