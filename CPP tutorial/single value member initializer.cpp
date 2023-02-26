#include <iostream>
using namespace std;

class base
{
private:
    int x;

public:
    base(int a) : x(a)
    {
    }
    void print()
    {
        cout << "X : " << x << endl;
    }
};

int main()
{
    base obj(25);
    obj.print();

    return 0;
}