// Copy Constructor
#include<iostream>
using namespace std;

class math
{
    private:
        int a,b,c;
    public:
        math(int x, int y)
        {
            a=x;
            b=y;
        }
        math(math &d)
        {
            a=d.a;
            b=d.b;
        }
        void add()
        {
            c=a+b;
            cout<<"Total : "<<c<<endl;
        }

};

int main()
{
    math m(20,50);
    math m1(m);
    m.add();
    m1.add();
    return 0;
}