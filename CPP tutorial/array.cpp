#include <iostream>
using namespace std;

int main()
{
    int ar1[5] = {25, 89};
    int ar2[] = {25, 56, 78, 69, 23};
    for (int i : ar1)
    {
        cout << i << endl;
    }
    cout<<"\n--------------------\n";
    for (int j : ar2)
    {
        cout << j << endl;
    }

    cout<<"Size ar1 array : "<<sizeof(ar1)/sizeof(int)<<endl;
    cout<<"Size ar2 array : "<<sizeof(ar2)/sizeof(int)<<endl;

    
    int a[100],i,n;
    cout<<"\nEnter the limit : ";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter the integer : ";
        cin>>a[i];
    }
    for (int j=1; j<n; j++)
    {
        cout<<a[j]<<" | ";
    }
    return 0;
}