#include <iostream>
using namespace std;

class grandfather
{
public:
    void land()
    {
        cout << "Grandfather owns 5Acre land" << endl;
    }
};
class father:public grandfather
{
public:
    void house()
    {
        cout << "Father owns a 2BHK house" << endl;
    }
};
class mother
{
public:
    void jewel()
    {
        cout << "Mother owns Jewellery" << endl;
    }
};
class son:public father,public mother
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
    s.land();
    s.house();
    s.jewel();
    s.car();
    return 0;
}