// Default Argument in function
#include<iostream>
using namespace std;

void bio(string name,int age,string city="Chennai");//Default Argument

int main()
{
    bio("Abi",26);
    bio("Sekar",29,"Madurai");
    return 0;
}

void bio(string name,int age,string city)
{
    cout<<name<<" is from city "<<city<<" with age "<<age<<endl;
}