#include<iostream>
using namespace std;
int main(){
    float a, b, sum, sub, mul, div; // Declare variables for two numbers and their results.
    cout << "Enter number 1: "; // Prompt user for first number
    cin >> a; // Read first number from user input
    cout << "Enter number 2: ";
    cin >> b;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    cout << "Sum: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;
    return 0;
    
}
