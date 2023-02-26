#include<iostream>
using namespace std;

class bank
{
    public:
    virtual void debit_credit()=0;
    virtual void loan()=0;
};
class hdfc:public bank
{
    public:
    void debit_credit()
    {
        cout<<"hdfc debit and credit card"<<endl;
    }
    void loan()
    {
        cout<<"hdfc bank providing loan at 12%"<<endl;
    }
};
class ib:public bank
{
    public:
    void debit_credit()
    {
        cout<<"indian bank debit and credit card"<<endl;
    }
    void loan()
    {
        cout<<"Indian bank providing loan at 8%"<<endl;
    }
};

int main()
{
    bank *b=new hdfc();
    b->debit_credit();
    b->loan();
    return 0;
}