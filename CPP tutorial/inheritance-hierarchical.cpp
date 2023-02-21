#include <iostream>
using namespace std;

class shape
{
public:
    float length, breadth, radius;
};

class rectangle : shape
{
public:
    void getrectagle_details()
    {
        cout<<"Area of Rectangle"<<endl;
        cout << "Enter Length : ";
        cin >> length;
        cout << "Enter Breadth : ";
        cin >> breadth;
    }

    float rectangle_area()
    {
        return length * breadth;
    }
};

class circle : shape
{
public:
    void getcircle_details()
    {
        cout<<"Area of Circle : "<<endl;
        cout << "Enter Radius : ";
        cin >> radius;
    }
    float circle_area()
    {
        return ((22 / 7) * (radius * radius));
    }
};

class square : shape
{
public:
    void getsquare_details()
    {
        cout<<"Area of the Square : "<<endl;
        cout << "Enter Length : ";
        cin >> length;
    }
    float square_area()
    {
        return length * length;
    }
};

int main()
{
    rectangle r;
    circle c;
    square s;
    r.getrectagle_details();
    cout << "Area of the Rectangle : " << r.rectangle_area() << endl;
    cout<<"\n--------------------\n";
    c.getcircle_details();
    cout << "Area of the Circle : " << c.circle_area() << endl;
    cout<<"\n--------------------\n";
    s.getsquare_details();
    cout << "Area of the Square : " << s.square_area() << endl;
}