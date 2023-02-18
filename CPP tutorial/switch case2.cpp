#include<iostream>
using namespace std;
// find the number of days in for a month

int main(int argc, char const *argv[])
{
    int m;
    cout<<"Enter the month number (1-12) : ";
    cin>>m;

    switch (m
    )
    {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :
        cout<<"Month contains 31 days";
        break;
    case 2 :
        cout<<"Month contains 28 or 29 days";
        break;
    case 4 :
    case 6 :
    case 9 :
    case 11 :
        cout<<"Month contains 30 days";
        break;
    default:
        cout<<"Invalid input";
        break;
    }
    return 0;
}
