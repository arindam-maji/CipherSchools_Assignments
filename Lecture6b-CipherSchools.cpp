#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    i=j=k=0;
    cout << i << " " << j << " " << k <<endl;

    //post - increment
    j = i++; 
    cout << i << " " << j << " " << k << endl;

    //pre - increment
    k = ++i;
    cout << i << " " << j << " " << k << endl;

    //printing numbers till 100
    for( int i = 1 ; i < 101 ; i++){
        cout << i << " " ;
    }
    return 0;
}