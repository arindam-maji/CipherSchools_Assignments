#include<iostream>
using namespace std;

int main(){
    // float a, b;

    // cout << "Enter the value of a and b: ";
    // cin >> a;
    // cin >> b;

    // if ( a > 0.01 || b > a )
    // { // 
    //     cout << "The condition inside if statement is correct";
    // }

    //grading system
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;

    if( marks >90 ){
        cout << "The student has A." << endl;
    }
    else if (marks < 80)
    {
        cout << "The student has B." << endl;
    }
    else if (marks < 70)
    {
        cout << "The student has C." << endl;
    }
    else if (marks > 60)
    {
        cout << "The student has D." << endl;
    }
    else{
        cout << "The student has failed." << endl;
    }

    //Switch cases

    int a;
    cout << "Enter value for a : " ;
    cin >> a;

    switch(a){
        case 1:
        cout << "The value of a is 1" << endl;
        break;
        case 2:
        cout << "The value of a is 2" << endl;
        break;
        case 3:
        cout << "The value of a is 3" << endl;
        break;
    }
    return 0;
}