#include<iostream>
using namespace std;

inline int cube(int y)
{
    int result = y*y*y;
    return result;
}

int main()
{
    int x=2;
    cout<<"Cube : "<<cube(x)<<endl;
    return 0;
}