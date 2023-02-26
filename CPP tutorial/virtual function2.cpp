#include<iostream>
using namespace std;

class vaccine
{
    public:
    virtual void put_vaccine()// virtual function
    {
        cout<<"Covid Vaccine"<<endl;
    }
};

class covaxin:public vaccine
{
    void put_vaccine()
    {
        cout<<"put covaxin vaccine"<<endl;
    }
};

class  covishield:public vaccine
{
    void put_vaccine()
    {
        cout<<"put covishield vaccine"<<endl;
    }
};

int main()
{
    covaxin cx;
    covishield cs;
    vaccine *p=NULL;
    p=&cx;
    p->put_vaccine();
    p=&cs;
    p->put_vaccine();

    return 0;
}