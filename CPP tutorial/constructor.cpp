//Default Constructor
#include<iostream>
using namespace std;

class sum
{
    private:
        int a,b,c;
    public:
        sum()
        {
            a=0,b=0;     
            cout<<"Constructor : "<<c<<endl;
        }
        void add()
        {
            c=a+b;
            cout<<"Total : "<<c<<endl;
        }
};

int main()
{
    sum s;
    //s.add();
    return 0;    
}