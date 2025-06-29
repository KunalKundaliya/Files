/*Class Methods
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

-Inside class definition
-Outside class definition


Note: You access methods just like you access attributes; by creating an
    object of the class and using the dot syntax (.):

Inside Example:
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
        cout << "Hello World!";
    }
};
int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
    return 0;
}


To define a function outside the class definitio:
Outside Example
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
*/
// #include <iostream>
// using namespace std;

// class Car
// {                 // The class
// public:           // Access specifier
//     string brand; // Attribute
//     string model; // Attribute
//     int year;     // Attribute
//     Car(string x, string y, int z)
//     { // Constructor with parameters
//         brand = x;
//         model = y;
//         year = z;
//     }
// };

// int main()
// {
//     Car carObj1("BMW", "X5", 1999);
//     Car carObj2("Ford", "Mustang", 1969);
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//     return 0;
// }

// Base class
#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tutu, tutu! \n";
    }
};
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}
