#include<iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
public:
    void getdata()
    {
        cout<<"Enter the Name : ";
        cin>>name;
        cout<<"Enter the Age : ";
        cin>>age;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

};

int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}
