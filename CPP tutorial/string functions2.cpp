/* String Functions
    Input functions
    Capacity functions
    Iterator functions
    Manipulating functions*/

#include <iostream>
using namespace std;

//Capacity functions

int main(int argc, char const *argv[])
{
    string a("Abi tutorial");
    cout<<a<<endl;
    cout<<"Size of string : "<<size(a)<<endl; //method 1
    cout<<"Length of string : "<<a.length()<<endl; //method 2
    cout<<"Maximum size of string : "<<a.max_size()<<endl;
    return 0;
}
