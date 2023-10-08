#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a,b,c,d,e;

    // cout << "Give 5 integers as input : " << endl;
    // cin >> a >> b >> c >> d >> e;
    // cout << "Integers in reversed order are : " << e << " " << d << " " << c << " " << b << " " << a;

    int array[5];

    for(int i = 0 ; i < 5 ; i++){
        cout << "a[" << i << "] = " ;
        cin >> array[i];
        cout << endl;
    }
    cout << "Elements in reversed order are : " << endl;
    for ( int i = 0; i < 5 ; i++){
        cout << "a[" << i << "] = " << array[i] << endl;
    }

    return 0;
}