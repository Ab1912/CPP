#include <iostream>
using namespace std;

class A
{
private:
    int x;
    int y;

public:
    friend void setdata();
};
void setdata()
{
    A obj;
    obj.x = 10;
    obj.y = 20;
    cout << "X : " << obj.x << endl;
    cout << "Y : " << obj.y << endl;
}

int main()
{
    setdata();
    return 0;
}