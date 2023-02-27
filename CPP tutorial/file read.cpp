#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    string mytext;
    ifstream readfile("test.txt");
    while (getline(readfile,mytext))
    {
        cout<<mytext<<endl;
    }
    readfile.close();
    return 0;
}