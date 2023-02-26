#include<iostream>
using namespace std;

class car
{
public:
    void start()
    {
        cout<<"Car start"<<endl;
    }
};

class bmw : public car
{
public:
    void gear()
    {
        cout<<"Bmw advanced gear sysytem "<<endl;
    }
};

int main()
{
    /*bmw obj;
    obj.start();
    obj.gear();*/
    bmw b;
    car *p=nullptr;
    p=&b;
    p->start();
    return 0;
}