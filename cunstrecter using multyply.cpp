//Write a program of Addition, Subtraction, Division, Multiplication usingconstructor.// 
#include <iostream>
using namespace std;
 
int main(){
    /* Variable declation */
    int x, y;
    int sum, difference, multy, modulo;
    float divi;
     
    // Taking input from user and storing it 
 // in x and y 
    cout << "Enter First Number\n";
    cin >> x;
    cout << "Enter Second Number\n";
    cin >> y;
     
    // Adding two numbers 
    sum = x + y;
    
    // Subtracting two numbers 
    difference = x - y;
    
    // Multiplying two numbers
    multy = x * y;
    
    // Dividing two numbers 
    divi = (float)x / y;
    
    // returns remainder of after an integer division 
    modulo = x % y;
     
    cout << "\nSum = " << sum;
    cout << "\nDifference  = " <<difference;
    cout << "\nMultiplication = " <<multy;
    cout << "\nDivision = " << divi;
    cout << "\nRemainder = " << modulo;
     
    return 0;
}
