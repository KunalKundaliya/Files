#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter 1st num value :" << endl;
        cin >> a;
        cout << "Enter 2nd num value :" << endl;
        cin >> b;
    }
    void output()
    {
        cout << "Multipication is " << a * b << endl;
        cout << "Division  is " << a / b << endl;
        cout << "Subtraction is " << a - b << endl;
        cout << "Addition is " << a + b << endl;
    }
};
class scientificcalculator : public SimpleCalculator
{
public:
    void soperations()
    {
        input();
        output();
        cout << "Square root of a is " << sqrt(a) << endl;
        cout << "Cuberoot of a is " << cbrt(a) << endl;
        cout << "Square root of b is " << sqrt(b) << endl;
        cout << "Cuberoot of b is " << cbrt(b) << endl;
        cout << "a to the power b is " << pow(a, b) << endl;
    }
    void calculations()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
    }
};
class HybridCalculator : public scientificcalculator
{
public:
    void display()
    {
        soperations();
        calculations();
    }
};
int main()
{
    HybridCalculator cal;
    cal.display();
}