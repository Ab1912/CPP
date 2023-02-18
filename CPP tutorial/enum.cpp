#include <iostream>
using namespace std;

enum gender
{
    Male,
    Female
};
int main()
{
    gender g = Male;

    switch (g)
    {
    case Male:
        cout << "Gender is Male";
        break;
    case Female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Invalid input";
        break;
    }
    return 0;
}