#include<iostream>
using namespace std;

class base
{
    public:
    virtual void fun()// virtual function
    {
        cout<<"This is base class"<<endl;
    }
};

class derived : public base
{
    public:
    void fun()
    {
        cout<<"This is derived class"<<endl;
    }
};

int main()
{
    derived obj;
    obj.fun();
    base *p=&obj;
    p->fun();
    return 0;
}