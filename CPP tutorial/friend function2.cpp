#include<iostream>
using namespace std;

//friend void setvalue(A &o,int a);
class A
{
    private:
    int x;
    public:
    A()
    {
        x=0;
    }
    void print()
    {
        cout<<"X : "<<x<<endl;
    }
    friend void setdata(A &o,int a);    
};

void setdata(A &o,int a)
{
    o.x=a;
}

int main()
{
    A obj;
    obj.print();
    setdata(obj,5);
    obj.print();
}