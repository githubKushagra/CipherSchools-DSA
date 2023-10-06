#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter two floating point numbers:" << endl;
    cin >> a >> b;
    if (a > 0.01 && b > a)
    {
        cout << "If statement is correct";
    }
    else
    {
        cout << "If is false";
    }
    return 0;
}