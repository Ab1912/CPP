#include<iostream>
using namespace std;
//Bank Management System using Class & inheritance in C++
/*
    1.Saving Account
    2.current Account
 
    Account Creation
    Deposit
    Withdraw
    Balance
 
*/

class account
{
private:
    string ac_name;
    int ac_number;
    string ac_type;
public:
    account()
    {
        ac_number=0;
    }
    void getdetails()
    {
        cout<<"Enter Account Name : ";
        cin>>ac_name;
        cout<<"Enter Account Number : ";
        cin>>ac_number;
    }    
    void display_details()
    {
        cout<<"Account Name : "<<ac_name<<endl;
        cout<<"Account Number : "<<ac_number<<endl;
    }
};

class savings:public account
{
private:
float s_balance, s_interest;
public:
    savings()
    {
        s_balance=0;
        s_interest=0;
    }
    void s_deposit()
    {
        int s_deposit;
        cout<<"Enter the amount to deposit : ";
        cin>>s_deposit;
        s_balance=s_balance+s_deposit;
        s_interest=s_deposit*0.02;
        s_balance=s_balance+s_interest;
        cout<<"\nBalance : "<<s_balance<<endl;
    }

    void s_withdraw()
    {
        int s_withdraw;
        cout<<"Enter the amount to withdraw : ";
        cin>>s_withdraw;
        if (s_balance > 1000 && s_balance > s_withdraw)
        {   
            s_balance=s_balance-s_withdraw;
            cout<<"\nBalance : "<<s_balance;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
    
    void s_balance_details()
    {
        cout<<"\nBalance : "<<s_balance<<endl;
    }
};

class current:public account
{
private:
float c_balance, c_interest;
public:
    current()
    {
        c_balance=0; 
    }
    void c_deposit()
    {
        int c_deposit;
        cout<<"Enter the amount to deposit : ";
        cin>>c_deposit;
        c_balance=c_balance+c_deposit;
        cout<<"\nBalance : "<<c_balance<<endl;
    }

    void c_withdraw()
    {
        int c_withdraw;
        cout<<"Enter the amount to withdraw : ";
        cin>>c_withdraw;
        if (c_balance > 1000 && c_balance > c_withdraw)
        {   
            c_balance=c_balance-c_withdraw;
            cout<<"\nBalance : "<<c_balance;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
    
    void c_balance_details()
    {
        cout<<"\nBalance : "<<c_balance<<endl;
    }
};

int main()
{
    savings s;
    current c;
    int ch,ch1,ch2;
    cout<<"Welcome to TDS Bank"<<endl;
    s.getdetails();
    cout<<"\nSavings or Current Account"<<endl;
    cout<<"\n1.Savings Account"<<endl;
    cout<<"2.Current Account"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>ch;
    if (ch==1)
    {
    while (1)
    {
        cout<<"\nSavings Acccount\n";
        cout<<"\n1.Deposit Amount"<<endl;
        cout<<"2.Withdraw Amount"<<endl;
        cout<<"3.Balance details"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>ch1;
        switch (ch1)
        {
        case 1:
            s.s_deposit();
            break;
        case 2:
            s.s_withdraw();
            break;
        case 3:
            s.display_details();
            cout<<"Account Type : Savings"<<endl; 
            s.s_balance_details();
            break;
        case 4:
            goto end;
        default:
            cout<<"Invalid input try again"<<endl;
            break;
        }    
    }
    }
if (ch==2)
    {
    while (1)
    {
        cout<<"\nCurrent Acccount\n";
        cout<<"\n1.Deposit Amount"<<endl;
        cout<<"2.Withdraw Amount"<<endl;
        cout<<"3.Balance details"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>ch2;
        switch (ch2)
        {
        case 1:
            c.c_deposit();
            break;
        case 2:
            c.c_withdraw();
            break;
        case 3:
            c.display_details();
            cout<<"Account Type : Current"<<endl;
            c.c_balance_details();
            break;
        case 4:
            goto end;
        default:
            cout<<"Invalid input try again"<<endl;
            break;
        }   
    }
    }
    else
    {
        cout<<"Invalid input, try again"<<endl;
    }
    
    end:
    cout<<"Thank you!!!!!";
    return 0;
}