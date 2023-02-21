// Paramaterized Constructor
#include<iostream>
using namespace std;

class sum
{
    private:
        int a,b,c;
    public:
        sum(int x,int y)
        {
            a=x;
            b=y;
        }
        void add()
        {
            c=a+b;
            cout<<"Total : "<<c<<endl;
        }
};

int main()
{
    sum s(20,30);
    s.add();
    return 0;
}