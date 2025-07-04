#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 0;
    cout<<"Hello world"<<endl;
}
int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
//Characteristics of Constructors:
// 1. They have the same name as the class name
// 2. They do not have a return type, not even void
// 3. They are automatically invoked when an object is created
// 4. They can have default arguments and they should be ceclared inn public section of teh class.
// 5. They are automically invoked when an object is created.