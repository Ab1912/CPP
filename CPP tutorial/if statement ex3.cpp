#include<iostream>
using namespace std;
/*
A library charges a fine for every book returned late.
For first 5 days the fine is 50 paise,
for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return
the book and display the fine or the appropriate message.*/

int main(int argc, char const *argv[])
{
    int d;
    cout<<"Enter the no of late days : ";
    cin>>d;
    if (d>=1 && d<=5)
    {
        if (d==1)
        {
            cout<<d<<" days late fine 50 paise\n";
        }
        else
        {
            cout<<d<<" day late fine Rs. "<<0.5*d<<"\n";
        }  
    }
    else if (d>=6 && d<=10)
    {
        cout<<d<<" days late fine Rs."<<d<<"\n";
    }
    else if (d>=11 && d<=30)
    {
        cout<<d<<" days late fine Rs."<<5*d<<"\n";
    }
    else if (d>30)
    {
        cout<<d<<" days late, Yor membership cancelled\n";
    }
    else if (d==0)
    {
        cout<<"Returned on time, no fine";
    }
    
    else
    {
        cout<<"Invalid input";
    } 
    return 0;
}
