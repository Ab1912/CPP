#include<iostream>
using namespace std;
#define pi 3.14
#define rectangle(length,breadth)(length*breadth)
#define createString(s) #s
#define concat(a,b) a##b
int main()
{
    cout<<"Area of PI : "<<pi*5*5<<endl;
    int length=20, breadth=15, area;
    area = rectangle(length,breadth);
    cout<<"Area of Rectangle : "<<area<<endl;
    cout<<"New String : "<<createString(Abi tutorial)<<endl;
    int ab=100;
    cout<<"Concatenate : "<<concat(a,b)<<endl;
    cout<<"Line : "<<__LINE__<<endl;
    cout<<"File : "<<__FILE__<<endl;
    cout<<"Date : "<<__DATE__<<endl;
    cout<<"Time : "<<__TIME__<<endl;
    cout<<"CPP version : "<<__cplusplus<<endl;
    return 0;
}