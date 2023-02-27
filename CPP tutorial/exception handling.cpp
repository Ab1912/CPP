#include<iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        throw string("Abi");
        c=a/b;
        cout<<c; 
    }
    catch(int e)
    {
        cout<<"Error number : "<<e<<endl;
        cout<<"Number not divisible by zero"<<endl;
    }
    catch(float e)
    {
        cout<<"Error number : "<<e<<endl;
        cout<<"Number not divisible by zero"<<endl;
    }
    catch(char e)
    {
        cout<<"Error number : "<<e<<endl;
        cout<<"Number not divisible by zero"<<endl;
    }
    catch(...)
    {
        cout<<"Number not divisible by zero"<<endl;
    }
    return 0;
}