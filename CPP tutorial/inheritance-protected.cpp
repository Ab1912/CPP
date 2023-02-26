#include<iostream>
using namespace std;

class A
{
    protected:// Data accessible only by parent & inheritance class
        int x;
};

class B:public A
{
    public:
    void get_details()
    {
        cout<<"Enter the value of X : ";
        cin>>x;
    }
    void display_details()
    {
        cout<<"Value of X : "<<x;
    }
};

int main()
{
    B obj;
    obj.get_details();
    obj.display_details();
    return 0;
}