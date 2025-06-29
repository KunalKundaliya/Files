#include <iostream>
using namespace std;
// Forward declaration of class Complex
class Complex; // This is a forward declaration of class Complex
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumImaginaryComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Below line means that non member -addComplex function is allowed to do
    // individually declaring the friend function for each class
    // anything with the private parts (data members) of the class Complex.
    // Aliter : friend class Calculator; // This is a friend class declaration

    // for the class calculator only some functions of the class calculator
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumImaginaryComplex(Complex o1, Complex o2);

    friend class Calculator; // This is a friend class declaration
    // for all the functions of the class Calculator
public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber()
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumImaginaryComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(3, 4);
    o2.setNumber(5, 6);
    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    int result2 = calc.sumImaginaryComplex(o1, o2);
    cout << "The sum of imaginary parts of complex numbers is: " << result2 << endl;
    cout << "The sum of real parts of complex numbers is: " << result << endl;
    o1.printNumber();
    o2.printNumber();
    return 0;
}