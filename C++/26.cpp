#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    //Below line means that non member -addComplex function is allowed to do
    //anything with the private parts (data members) of the class Complex.
    //friend functions are those functions that can access the private data members of the other class
        friend Complex
        addComplex(Complex c1, Complex c2);
    void printNumber()
    {
        cout << "The complex number is: " << a << " + " << b <<"i"<<endl;
    }
};
Complex addComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setNumber((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(3, 4);
    c2.setNumber(5, 6);
    c1.printNumber();
    c2.printNumber();
    sum = addComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/*
Properites of friend functions :
1.Not in the scope of class.
2.Can be invoked without the help of any object.eg:c1.addcomplecx()
3.Usually contains the object as arguments.
4.Can be declared in the private/public  section of the class.
5.cannot access the members directly by their names and need an object as a reference to do so.
6. It cannot be inherited.
*/