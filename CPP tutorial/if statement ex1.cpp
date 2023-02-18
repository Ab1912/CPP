#include<iostream>
using namespace std;
/*
If his basic salary is less than Rs. 1500,
then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500,
then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input through the keyboard
write a program to find his gross salary
*/

int main(int argc, char const *argv[])
{
    float bs,hra,da,gs;
    cout<<"Enter the Basic salary : ";
    cin>>bs;
    if (bs<1500)
    {
        hra=bs*0.1;//10%
        da=bs*0.9;//90%
    }
    else
    {
        hra=500;
        da=bs*0.98;//98%
    }
    gs=bs+hra+da;   
    cout<<"HRA              : Rs."<<hra<<endl;
    cout<<"Daily allowance  : Rs."<<da<<endl;
    cout<<"Gross salary     : Rs."<<gs<<endl;
    return 0;
}
