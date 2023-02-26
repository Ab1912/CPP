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
    student obj("Suresh", 25);
    obj.print();
    obj.setname("Kumar");
    obj.setage(21);
    cout << "Name : " << obj.getname() << endl;
    cout<<"Age : " << obj.getage() << endl;
    return 0;
}