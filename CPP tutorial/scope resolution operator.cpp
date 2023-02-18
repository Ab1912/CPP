#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int m1, m2, m3, tot;
    float avg;

public:
    void getdata()
    {
        cout << "Enter the Name : ";
        cin >> name;
        cout << "Enter the three marks :";
        cin >> m1 >> m2 >> m3;
    }
    void display();
};

void student::display() // scope resolution operator
{
    cout << "Name :" << name << endl;
    cout << "Mark1 : " << m1 << endl;
    cout << "Mark2 : " << m2 << endl;
    cout << "Mark3 : " << m3 << endl;
    tot = m1 + m2 + m3;
    avg = tot / 3.0;
    cout << "Total : " << tot << endl;
    printf("Average : %0.2f\n", avg);
}

int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}