#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    student(string name, int age) : name(name), age(age) // same name as data initalized
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    student obj("Kumar", 45);
    return 0;
}