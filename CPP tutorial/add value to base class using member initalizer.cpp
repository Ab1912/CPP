#include<iostream>
using namespace std;

class base
{
    private:
    const int x;//constant variable
    public:
    base(int a):x(a)//member initializer
    {
        cout<<"X : "<<x<<endl;
    }
};

class child : public base   
{
    private:
    int y;
    public:
    child(int a,int b):base(a),y(b)
    {
        cout<<"Y : "<<y<<endl;
    }
};

int main()
{
    child obj(25,30);
    return 0;
}