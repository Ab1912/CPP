/* String Functions
    Input functions
    Capacity functions
    Iterator functions
    Manipulating functions*/

#include<iostream>
using namespace std;
//Iterator functions

int main(int argc, char const *argv[])
{
    string a = "Abi tutorial";
    string :: iterator it;

    for ( it = a.begin(); it != a.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}

