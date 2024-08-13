#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream obj("Test.txt",ios::app);
    obj<<"Abi tutorial"<<endl;
    obj<<"C++"<<endl;
    obj.close();
    
    return 0;
}