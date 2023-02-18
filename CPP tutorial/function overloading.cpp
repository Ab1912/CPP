// Function overloading
#include<iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b,int c);
float sum(float a,float b);

int main()
{
    cout<<"Total : "<<sum(52,46)<<endl;
    cout<<"Total : "<<sum(52,46,85)<<endl;
    cout<<"Total : "<<sum(52.52f,46.87f)<<endl;

    return 0;
}

int sum(int a,int b)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}

float sum(float a,float b)
{
    return a+b;
}

