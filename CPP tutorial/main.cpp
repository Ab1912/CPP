#include <iostream>
using namespace std;

// Bank Management System using Class & inheritance in C++
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
    void get_details()
    {
        cout << "Welcome to TDS Bank\n"
             << endl;
        cout << "Enter Account Name : ";
        cin >> ac_name;
        cout << "Enter Account Number : ";
        cin >> ac_number;
        //cout << "Enter Account Type : ";
        //cin >> ac_type;
    }
    void display_details()
    {
        cout << "Account Name : " << ac_name << endl;
        cout << "Account Number : " << ac_number << endl;
        //cout << "Account Type : " << ac_type << endl;
    }
};

class savings : public account
{
private:
float s_balance;
public:
    savings()
    {
        s_balance=0.0;
    }

    void s_deposit()
    {
        int s_deposit; float s_interest;
        cout<<"\nEnter the Amount to Deposit : ";
        cin>>s_deposit;
        s_balance=s_balance+s_deposit;
        s_interest=s_deposit*0.02;
        s_balance=s_balance+s_interest;
        cout<<"\nBalance : "<<s_balance<<endl;
    }
    void s_withdraw()
    {
        int s_withdraw;
        cout<<"\nEnter the Amount to Withdraw : ";
        cin>>s_withdraw;
        if (s_balance > 500 && s_balance > s_withdraw )
        {
            s_balance=s_balance-s_withdraw;
            cout<<"\nBalance : "<<s_balance<<endl;
        }
        else
        {
            cout<<"\nInsufficient Balance"<<endl;
        }
    }
    void s_balancedetails()
    {
        cout<<"\nBalance : "<<s_balance;
    }
};
class current : public account
{
private:
float c_balance;
public:

    current()
    {
        c_balance=0.0;
    }
    void c_deposit()
    {
        int c_deposit;
        cout<<"Enter the Amount to Deposit : ";
        cin>>c_deposit;
        c_balance=c_balance+c_deposit;
        cout<<"\nBalance : "<<c_balance<<endl;
    }
    void c_withdraw()
    {
        int c_withdraw;
        cout<<"Enter the Amount to Withdraw : ";
        cin>>c_withdraw;
        if (c_balance > 1000 && c_balance > c_withdraw )
        {
            c_balance=c_balance-c_withdraw;
            cout<<"\nBalance : "<<c_balance<<endl;
        }
        else
        {
            cout<<"\nInsufficient Balance"<<endl;
        }
    }
    void c_balancedetails()
    {

        cout<<"\nBalance : "<<c_balance;
    }
};

int main()
{
    savings s;
    current c;

    s.get_details();
    int ch;
    cout<<"\nSavings or Current Account\n"<<endl;
    cout<<"1. Savings Account"<<endl;
    cout<<"2. Current Account"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>ch;
    if (ch==1)
    {
        while (1)
        {
        
        cout<<"\n\nSavings Account\n"<<endl;
        int ch1;
        cout<<"1. Deposit Amount"<<endl;
        cout<<"2. Withdraw Amount"<<endl;
        cout<<"3. Balance Details"<<endl;
        cout<<"4. Account Details"<<endl;
        cout<<"5. Exit"<<endl;
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
            s.s_balancedetails();
            break;
        case 4:
            s.display_details();
            cout<<"Account Type : Savings";
            s.s_balancedetails();
            break;
        case 5:
            goto end;
            
        default:
            cout<<"Invlaid selection try again";
        }
        }
    }
    else if (ch==2)
    {
        while (1)
        {
        
        cout<<"\n\nCurrent Account\n"<<endl;
        int ch2;
        cout<<"1. Deposit Amount"<<endl;
        cout<<"2. Withdraw Amount"<<endl;
        cout<<"3. Balance Details"<<endl;
        cout<<"4. Account Details"<<endl;
        cout<<"5. Exit"<<endl;
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
            c.c_balancedetails();
            break;
        case 4:
            c.display_details();
            cout<<"Account Type : Current";
            c.c_balancedetails();
            break;
        case 5:
            goto end;
            
        default:
            cout<<"Invlaid selection try again";
        }
        }
    }
    else
    {
        cout<<"Invalid Account selection"<<endl;
    }
    
    end:
        cout<<"Thank you for Banking With us !!!!";
    return 0;
}