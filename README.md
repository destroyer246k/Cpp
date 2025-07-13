# Hello-World-And-Calculator
Aim: To print Hello World and design a Claculator to add,subtract,multiply and divide two user input number.
Appratus: GNU g++ compiler for local and code editor or Online C++ Compiler


NOTE: 
You may visit youtube for any query related downloading g++ compiler and setting up environment.
This Program is for beginners so it is not full proof to make it full proof you can use if-else statements in division column so that no one will enter 0 in denominator


Program Explaination:
The program begins with #include , allowing the program to use cin and cout for input/output. Without this #include statement, the compiler is unable to process cin or cout. Using using namespace std; allows us to refer to cin and cout directly in our code. 
The program begins execution in int main(). The statement std::cout << "Welcome to C++ Programming!" << std::endl; prints the welcome message. Likewise, cout << "Hello World" << std::endl; prints "Hello World".
After the greetings, int a; declares a variable of type int; then we have cout << "Enter a number: "; and cin >> a;. This line prompts the user for input, then stores the result of that input in the variable we declared above. 
After storing a we execute cout << "You entered: " << a << std::endl; and lastly cout << "Thank you for your input."; Finally we end our program with return 0; which indicates to the operating system that the program completed successfully.

About iostream and std:
The main purpose of iostream is to give the programmer a basic method of input/output using cin and cout. 
The identifiers cin and cout reside in a namespace called std. The programmer has two options to use them: Using std:: in front of the identifiers (for example, std::cout) or using using namespace std; which removes the requirement to prefix std::.

About Calculator:
Our calculator prompts the user for two float numbers. We declared five float variables (two for user input and three for the result of the arithmetic operations). 
The variables we created are; a, b for user input and sum, sub, mul, and div for storing the result of our arithmetic commands. 
The calculator does the following calculations: 
sum = a + b;
sub = a - b;
mul = a * b;
div = a / b;

The program then prints each of the calculations in the format of "Sum:" followed by std::endl to print the result of the calculation on a new line. We conclude with return 0; which indicates successful execution of our program.

Conclusion:
This Program will help in understaing of basic input and output, diffrent arithmetic operation in C++ and will give short idea on how we can built programs in C++.
