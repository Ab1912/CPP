#include<iostream>
using namespace std;

class student
{
    private:
    static int x;
    string name;
    int age;
    public:
    student(string n,int a)
    {   
        x++;
        name=n;
        age=a;

    }
    void print()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"\n\n";
    }
    static int getcount()
    {
        return x;
    }
};


int student::x=0;
int main()
{
    student s1("Selva",27);
    student s2("Kumar",30);
    student s3("Deva",35);
    s1.print();
    s2.print();
    s3.print();
    cout<<"Total number of students : "<<student::getcount()<<endl;

    return 0;
}