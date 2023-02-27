#include <iostream>
using namespace std;
#include<fstream>

int main()
{
    string text;
    ifstream obj("test1.txt");
    while (getline(obj,text))
    {
        cout<<text<<endl;
    }
    obj.close();
    return 0;
}
