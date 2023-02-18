/* String Functions
    Input functions
    Capacity functions
    Iterator functions
    Manipulating functions*/

#include <iostream>
using namespace std;

// Input functions

int main(int argc, char const *argv[])
{

    // string a ="Abi CPP tutorial";
      string a("Abi CPP tutorial");
      cout<<a<<endl;
      cout<<"\n-----------------\n";

      string firstname = "Abraham";
      string lastname  = "Abishek";
      cout<<firstname+" "+lastname<<endl;

      string fullname = firstname.append(lastname);
      cout<<fullname<<endl;
      cout<<fullname[2]<<endl;
      cout<<"\n-----------------\n";

      string b;
      cout<<"Enter the string : ";
      cin>>b;
      cout<<b<<endl;

      fflush(stdin);// to flush the memory

      string c;
      cout<<"Enter the string : ";
      getline(cin,c);
      cout<<c<<endl;

      string e;
      cout<<"Enter the string : ";
      cin>>e;
      e.push_back('s'); // Add a character to the end of the string
      cout<<e<<endl;

      fflush(stdin);

      string f;
      cout<<"Enter the string : ";
      cin>>f;
      f.pop_back(); // Remove a character from end of the string
      cout<<f<<endl;

    return 0;
}
