#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, i;
    cout << "Enter the Table : ";
    cin >> t;
    cout << "Enter the Limit : ";
    cin >> n;
    cout << "Multiplication table : "<< t << endl;
    for (i = 1; i <= n; i++)
    {
        cout << t << " X " << i << " = " << t * i << endl;
    }

    return 0;
}
