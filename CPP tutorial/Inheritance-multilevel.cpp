#include <iostream>
using namespace std;

class grandfather
{
public:
    void farm()
    {
        cout << "Grandfather owns a farm" << endl;
    }
};
class father : public grandfather
{
public:
    void house()
    {
        cout << "Father owns a 2BHK house" << endl;
    }
};
class son : public father
{
public:
    void car()
    {
        cout << "Son owns a Audi car" << endl;
    }
};

int main()
{
    son s;
    s.farm();
    s.house();
    s.car();
}