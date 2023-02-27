#include<iostream>
using namespace std;
/*
    Character Classification Functions in C++ Programming
      isalnum
      isalpha
      isdigit
      islower
      isupper
      isspace
    */
int main()
{
    int i,n=0;
    char a[7] = "A@ 1 d";
    cout<<"\nAlphanumeric : ";
    for ( i = 0; i <= 6; i++)
    {
        if (isalnum(a[i]))
        {
            cout<<a[i]<<",";
        }
    }
    cout<<"\n---------------\n";

    cout<<"Alphabet : ";
    for ( i = 0; i <= 6; i++)
    {
        if (isalpha(a[i]))
        {
            cout<<a[i]<<",";
        }
    }
    cout<<"\n---------------\n";

    cout<<"Digit : "<<endl;
    for ( i = 0; i <= 6; i++)
    {
        if (isdigit(a[i]))
        {
            cout<<a[i]<<",";
        }
    }
    cout<<"\n---------------\n";

    cout<<"Lowercase : ";
    for ( i = 0; i <= 6 ; i++)
    {
        if (islower(a[i]))
        {
            cout<<a[i]<<",";
        }
    }
    cout<<"\n---------------\n";

    cout<<"Uppercase : ";
    for ( i = 0; i < 7; i++)
    {
        if (isupper(a[i]))
        {
            cout<<a[i]<<",";
        }        
    }   
    cout<<"\n---------------\n";

    for ( i = 0; i < 7; i++)
    {
        if (isspace(a[i]))
        {
            cout<<a[i];
            n=n+i;
        }
    }
    if(n>0)
    {
        n=n-1;
    }
    cout<<"\nCount of spaces : "<<n<<endl;
    
    return 0;
}