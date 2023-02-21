#include<iostream>
using namespace std;

class father
{
public:
    void house()
    {
        cout<<"Father owns 2BHK house"<<endl;
    }
};
class mother
{
public:
    void jewels()
    {
        cout<<"Mother owns Jewellery"<<endl;
    }
};
class son:public father, public mother
{
public:
void car(){
    cout<<"Son owns a Audi car"<<endl;
}
};

int main()
{
    son s;
    s.house();
    s.jewels();
    s.car();
    return 0;
}