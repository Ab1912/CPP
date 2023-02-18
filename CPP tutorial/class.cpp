#include <iostream>
using namespace std;

class circle
{
private:
    float radius;

public:
    float area()
    {
        cout << "Enter the radius : ";
        cin >> radius;
        return ((22 / 7) * (radius * radius));
    }
    float Circumference()
    {
        return (2 * (22 / 7) * radius);
    }
};

int main()
{
    circle c;
    float obj = c.area();
    cout << "Area of the circle is : " << obj << endl;
    float obj1 = c.Circumference();
    cout << "Circumference of the circle is : " << obj1 << endl;
    return 0;
}