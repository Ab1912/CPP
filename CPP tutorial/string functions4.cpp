/* String Functions
    Input functions
    Capacity functions
    Iterator functions
    Manipulating functions*/
#include<iostream>
using namespace std;

//Manipulating functions

int main(int argc, char const *argv[])
{

    string x = "Ramesh";
    string y ="Suresh";
    cout<<"X before swap : "<<x<<endl;
    cout<<"Y before swap : "<<y<<endl;

    x.swap(y);
    cout<<"X after swap : "<<x<<endl;
    cout<<"Y after swap : "<<y<<endl;

    return 0;
}
