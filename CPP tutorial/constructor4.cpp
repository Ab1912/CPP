#include <iostream>
using namespace std;

class math
{
private:
    int a, b, c;

public:
    math() // Default Constructor
    {
        a = 0;
        b = 0;
    }
    math(int x, int y) // Parameterized Constructor
    {
        a = x;
        b = y;
    }
    math(math &d) // Copying Constructor
    {
        a = d.a;
        b = d.b;
    }
    void add()
    {
        c = a + b;
        cout << "Total : " << c << endl;
    }
};

int main()
{
    math m;
    math m1(20, 40);
    math m2(m1);
    m.add();
    m1.add();
    m2.add();

    return 0;
}