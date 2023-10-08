#include<iostream>
using namespace std;

int main(){
    int a, b;
    int c, d;

    cout << "Enter the value for a : ";
    cin >> a;

    cout << "Enter the value for b : ";
    cin >> b;

    cout << "Enter the value for c : ";
    cin >> c;

    cout << "Enter the value for d : ";
    cin >> d;

    cout << " ( a > b && c > d ) = ";
    cout << ( a > b && c > d);

    cout << endl;

    cout << " ( a > b OR c > d ) = ";
    cout << ( a > b || c > d );

    // C++ interprets false as 0
    // C++ interprets true as 1

    return 0;
}