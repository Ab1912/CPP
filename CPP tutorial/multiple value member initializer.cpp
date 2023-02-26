#include<iostream>
using namespace std;

class multi
{
    private:
    int x,y;
    public:
    multi(int a,int b) : x(a),y(b){}
    void print()
    {
        cout<<"X : "<<x<<endl;
        cout<<"Y : "<<y<<endl;
    }
};

int main()
{
    multi obj(25,45);
    obj.print();
}