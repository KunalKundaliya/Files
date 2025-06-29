#include <iostream>
using namespace std;
// Function Declaration and Definition

// Declaration: the return type, the name of the function, and parameters (if any)
// Definition: the body of the function (code to be executed)
// Note: If a user-defined function is declared after the main() function, an error will occur:
// eg:
// int main() {
//   myFunction();
//   return 0;
// }
// void myFunction() {
//   cout << "I just got executed!";
// }


// However, it is possible to separate the declaration and the definition of the function - for code optimization.
// Example
// Function declaration
// void myFunction();
// // The main method
// int main() {
//     myFunction();  // call the function
//     return 0;
// }
// // Function definition
// void myFunction() {
//   cout << "I just got executed!";
// }


//Syntax: variabletype  function_name(arguments);
// int sum(int a, int b);-->acceptable function prototype
//int sum(int a,b);-->not acceptable function prototype

//Functional paramters and functional arguments.
// Syntax
// void functionName(parameter1, parameter2, parameter3) {
//   // code to be executed
// }


// int sum(int a, int b); // function declaration
// //It is a function prototype that tells the compiler that there is a function named "sum" that takes two integer parameters and returns an integer value.
// int main() {
//     int num1, num2;
//     cout<<"Enter 1st number: "<<endl;
//     cin>>num1; 
//     cout<<"Enter 2nd number: "<<endl;
//     cin>>num2;
//     cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<sum(num1, num2)<<endl;
//     return 0;
//     //It means the end of the program.
//     // The program will return 0 to the operating system, indicating that it has completed successfully.
// }
// int sum(int a, int b) { // function definition
//     return a + b;
// }


