#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "This is class A";
    }
};
class B : virtual public A
{
public:
    void show()
    {
        cout << "This is class B";
    }
};
class C : virtual public A
{
public:
    void print()
    {
        cout << "This is class C";
    }
};
class D : public B, public C
{
public:
    
};

int main()
{
    D obj;
    obj.display();
    return 0;
}