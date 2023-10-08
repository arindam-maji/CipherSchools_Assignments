#include <iostream>
using namespace std;

int main()
{
    // Create variables
    int myNum = 5;           // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    float myFloatNum0 = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum0); // Outputs 3.500000
    printf("%lf", myDoubleNum); // Outputs 19.990000

    float myFloatNum1 = 3.5;

    printf("%f\n", myFloatNum1);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum1); // Only show 1 digit
    printf("%.2f\n", myFloatNum1); // Only show 2 digits
    printf("%.4f", myFloatNum1);   // Only show 4 digits
    return 0;
}