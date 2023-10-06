#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    //	 cout<<"give 4 integers as input a,b,c,d"<<endl;
    //	 cin>>a>>b>>c>>d;
    //
    //	 if(a>b && c>d){
    //	 	cout<<"haha";
    //	 }
    //	 else if(a>b && c<d){
    //	 	cout<<"hehe";
    //	 }
    //	 else{
    //	 	cout<<"huhu";
    //	 }
    cout << "enter a int:";
    cin >> a;

    switch (a)
    { // to the condition in this paranthesis //it will first evaluate the value inside the switch paranthesis
    case 1:
        cout << "The value of a is 1";
        break;
    case 2:
        cout << "The value of a is 2";
        break;
    case 3:
        cout << "The value of a is 3";
        break;
    default:
        cout << "default will always be printed";
        break;
    }
    return 0;
}