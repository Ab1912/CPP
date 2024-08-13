#include <iostream>
using namespace std;

class B;
class A
{
private:
    int x;
    friend B;
};

class B
{
public:
    A obj;
    void display()
    {
        obj.x = 10;
        cout << "X : " << obj.x << endl;
    }
};


int main()
{
    B obj1;
    obj1.display();
    return 0;
}