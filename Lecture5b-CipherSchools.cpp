#include<iostream>
using namespace std;

int main(){
    int array[10];

    //taking inputs for array
    for( int i = 0 ; i < 10 ; i++){
        cout << "a[" << i << "] = ";
        cin >> array[i];
        cout << endl; 
    }
    //printing the elements of array
    for( int i = 0 ; i < 10 ; i ++){
        cout << " a[" << i << "] = " << array[i] << endl; 
    }
    cout << endl;
    //print the reverse of array
    for( int i = 9 ; i >= 0 ; i--){//stop at i = 0 beause array of negative index is not defined
    cout << "a[" << i << "] = " << array[i] << endl;
    }
    return 0;
}