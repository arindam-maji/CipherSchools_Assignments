#include<iostream>
using namespace std;

int main(){

    int i;
    int input;

    for( i = 1 ; i < 101 ; i++){
        cin >> input;
        if( input == 24 ){
            cout << "Congrats you have guessed correct. ";
            break;
        }
    }
    return 0;
}