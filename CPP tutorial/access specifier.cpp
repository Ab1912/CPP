#include<iostream>
using namespace std;

class student{

public:

    string name;
    int age;

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

};

int main(){

    student s;
    cout<<"Enter the Name : ";
    cin>>s.name;
    cout<<"Enter the Age : ";
    cin>>s.age;
    s.display();
    return 0;
}