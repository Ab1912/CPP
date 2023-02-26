#include<iostream>
using namespace std;

class bike
{
public:
    virtual void start()=0;//Pure virtual class
    /*{
        cout<<"Bike start"<<endl;
    }*/
};

class apache:public bike
{
public:
void start()
{
    cout<<"Apache start"<<endl;
}
};

int main()
{
    bike *p = new apache();
    p->start();
    return 0;
}