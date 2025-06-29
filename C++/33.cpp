#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }
    Complex (int x)
    {
        real = x;
        img = 0;
    }
    void show()
    {
        cout << "Complex number :" << real << " + " << img << "i" << endl;
    }
    // friend void add(Complex, Complex);
};
// void add(Complex c1, Complex c2)
// {
//     Complex c3(0, 0);
//     c3.real = c1.real + c2.real;
//     c3.img = c1.img + c2.img;
//     cout << "Sum of complex numbers : " << c3.real << " + " << c3.img << "i" << endl;
// }
int main()
{
    Complex c1(2, 3), c2(4, 5);
    c1.show();
    c2.show();
    Complex c3(3);
    c3.show();
    // add(c1, c2);
    return 0;
}