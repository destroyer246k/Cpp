#include<iostream>// This line includes the iostream library which is used for input and output in C++. 
using namespace std; // The 'using namespace std;' line allows us to use standard library features without prefixing them with 'std::'.

int main(){
    std::cout << "Welcome to C++ Programming!" << endl; // if std was not defined in line 2.
    cout << "Hello World" << endl; //endline(endl) is used to print a new line
    int a; // Declare an integer variable 'a' to store user input.
    cout << "Enter a number: ";
    cin >> a;  
    cout << "You entered: " << a << endl;
    cout << "This is a simple C++ program." << endl;
    return 0; // The return statement returns value to main function as it is of type int.
}