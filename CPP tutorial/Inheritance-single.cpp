#include <iostream>
using namespace std;

class father
{
public:
    void house()
    {
        cout << "Father has a 2BHK house" << endl;
    }
};
class son : public father
{
public:
    void car()
    {
        cout << "Son has a Audi car" << endl;
    }
};

int main()
{
    son s;
    s.house();
    s.car();
    return 0;
}