#include <iostream>
using namespace std;
/*
age>=18:
    Male:
        Room-5
    Female:
        Room-6
Not Eligible
*/
int main(int argc, char const *argv[])
{
    int a;
    char g;

    cout << "Enter your age : ";
    cin >> a;
    cout << "Enter your gender(M/F) : ";
    cin >> g;

    if (a >= 18)
    {
        cout << "You are elgible to vote" << endl;
        if (g == 'm' || g == 'M')
        {
            cout << "Age : " << a << " Gender : Male" << endl;
            cout << "Go to room number 5";
        }
        else if (g == 'f' || g == 'F')
        {
            cout << "Age : " << a << " Gender : Female" << endl;
            cout << "Go to room number 6";
        }
        else
        {
            cout << "Invalid input";
        }
    }
    else if (a >= 0 && a <= 17)
    {
        cout << "You are not elgible to vote";
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}
