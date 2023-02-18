#include<iostream>
using namespace std;
/*Else If Ladder in C++ :
 
A certain grade of steel is graded according to the following conditions:
 
1. Hardness must be greater than 50.
2. Carbon content must be less than 0.7
3. Tensile strength must be greater than 5600
 
The grades are as follows:
 
Grade is 10, if all three conditions are met.
Grade is 9, if conditions 1 and 2 are met.
Grade is 8, if conditions 2 and 3 are met.
Grade is 7, if conditions 1 and 3 are met.
Grade is 6, if only one condition is met.
Grade is 5, if none of the conditions are met.
*/
int main(int argc, char const *argv[])
{
    int h,t; float c;

    cout<<"Enter the Hardness level : ";
    cin>>h;
    cout<<"Enter the Carbon content : ";
    cin>>c;
    cout<<"Enter the Tensile strength : ";
    cin>>t;

    if (h>50 && c<0.7 && t>5600)
    {
        cout<<"Steel grade is 10";
    }
    else if (h>50 && c<0.7)
    {
        cout<<"Steel grade is 9";
    }
    else if (c<0.7 && t>5600)
    {
        cout<<"Steel grade is 8";
    }
    else if (h>50 && t>5600)
    {
        cout<<"Steel grade is 7";
    }
    else if (h>50 || c<0.7 || t>5600)
    {
        cout<<"Steel grade is 6";
    }
    else
    {
        cout<<"Steel grade is 5";
    }
    
    return 0;
}
