#include<iostream>
using namespace std;

class A
{
    private:
    char x;
    public:
    A(int a):x{a}// Using braces higlights narrow conversion problem
    {
        cout<<"X : "<<int(x)<<endl;
    }
};

int main()
{
    A obj(40);
    return 0;
}