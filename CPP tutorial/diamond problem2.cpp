#include <iostream>
using namespace std;

class A
{
public:
    int x;
    A() { cout << "Constructing A" << endl; }
};
class B : virtual public A
{
public:
    B() { cout << "Constructing B" << endl; }
};
class C : virtual public A
{
public:
    C() { cout << "Constructing C" << endl; }
};
class D : public B, public C
{
public:
    D() { cout << "Constructing D" << endl; }
};

int main()
{
    D obj;
    obj.x=10;
    cout<<obj.x<<endl;
    return 0;
}