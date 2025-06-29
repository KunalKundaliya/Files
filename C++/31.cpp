#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int); 
    // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(int x, int y) 
// ----> This is a parameterized constructor as it takes  parameters.
{
    a = x;
    b = y;
}

int main()
{
    // Implicitly calling constructor
    Complex c1(2, 3);

    // Explicitly calling constructor
    Complex c2 = Complex(5, 7); // This is also a valid way to call the constructor
    c1.printNumber();
    c2.printNumber();
    return 0;
}