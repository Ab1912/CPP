#include<iostream>
using namespace std;

// program to find vowels
int main(int argc, char const *argv[])
{
    char c;
    cout<<"Enter the Alphabet : ";
    cin>>c;
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        cout<<c<<" is a vowel"<<endl;
    }
    else if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        cout<<c<<" is a vowel"<<endl;
    }  
    else
    {
        cout<<c<<" is not a vowel"<<endl;
    }
 
    return 0;
}
