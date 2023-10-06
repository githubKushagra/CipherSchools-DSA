#include <iostream>

using namespace std;

int main()
{
    int a[10];
    cout << "Enter 10 integers:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << "The 10 given inputs in reverse order are: " << endl;

    for (int i = 9; i >= 0; i--)
    {
        cout << a[i];
    }
    return 0;
}