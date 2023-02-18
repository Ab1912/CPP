#include<iostream>
using namespace std;
//Identify the month using month number

int main(int argc, char const *argv[])
{
    int m;

    cout<<"Enter the Month number(1-12) : ";
    cin>>m;

    switch (m)
    {
    case 1:
        cout<<m<<" - "<<"January";
        break;
    case 2:
        cout<<m<<" - "<<"February";
        break;
    case 3:
        cout<<m<<" - "<<"March";
        break;
    case 4:
        cout<<m<<" - "<<"April";
        break;
    case 5:
        cout<<m<<" - "<<"May";
        break;
    case 6:
        cout<<m<<" - "<<"June";
        break;
    case 7:
        cout<<m<<" - "<<"July";
        break;
    case 8:
        cout<<m<<" - "<<"August";
        break;
    case 9:
        cout<<m<<" - "<<"September";
        break;
    case 10:
        cout<<m<<" - "<<"October";
        break;
    case 11:
        cout<<m<<" - "<<"November";
        break;
    case 12:
        cout<<m<<" - "<<"December";
        break;
    default:
        cout<<"Enter valid month Number";
        break;
    }
    return 0;
}
