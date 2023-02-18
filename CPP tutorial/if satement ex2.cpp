#include<iostream>
using namespace std;
/*
A company insures its drivers in the following cases:
    a.	If the driver is married.
    b.	If the driver is unmarried, male & above 30 years of age.
    c.	If the driver is unmarried, female & above 25 years of age.
*/

int main(int argc, char const *argv[])
{
    int m,age,ch;
    cout<<"Marital status \n1.Married \n2.Unmarried"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>m;

    if (m==1)
    {
        cout<<"\nYou are eligible for insurance"<<endl;
    }
    else if (m==2)
    {
        cout<<"Enter your Gender \n1.Male \n2.Female"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>ch;
        cout<<"Enter your Age : ";
        cin>>age;
        if (ch==1 && age>30)
        {
            cout<<"\nMale "<<age<<", You are eligible for insurance";
        }
        else if (ch==2 && age>25)
        {
            cout<<"\nFemale "<<age<<", You are eligible for insurance";
        }
        else
        {
            cout<<"\nYou are not eligible for insurance";
        }  
    }
    else
    {
        cout<<"Invalid input";
    }
    return 0;
}
