#include<iostream>
using namespace std;

class math
{
private:
    int a,b,c;
public:
    math()
    {
        a=10;
        b=20;
    }
    ~math()//Destructor
    {
        cout<<"Memory Destroyed"<<endl;
    }
    void add()
    {
        c=a+b;
        cout<<"Total : "<<c<<endl;
    }
};

int main()
{
    math obj;
    obj.add();
    return 0;
}