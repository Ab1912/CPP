#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    student(string n, int a)
    {
        // this->setname(n);
        // this->setage(a);
        name = n;
        age = a;
    }
    string getname()
    {
        return this->name;
    }
    string setname(string n)
    {
        return this->name = n;
    }
    int getage()
    {
        return this->age;
    }
    int setage(int a)
    {
        return this->age = a;
    }
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    student obj("Ramesh", 25);
    obj.print();
    obj.setname("Suresh");
    obj.setage(21);
    cout << obj.getname() << endl;
    cout << obj.getage() << endl;
    return 0;
}
