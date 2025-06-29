#include <iostream>
using namespace std;
//Copy Constructor;
class Number
{
    int a, b;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    //When no copy constructor is found,complier supplies its own copy constructor.
    // Number(Number &obj)
    // {
    //     a=obj.a;
    //     cout<<"Copy constructor  called :"<<endl;
    // }
    void show()
    {
        cout << "The number is: " << a << endl;
    }
};
int main()
{
    Number x, y, z(45);
    x.show(); // Calls default constructor
    y.show(); // Calls default constructor
    z.show(); // Calls parameterized constructor
    Number z1(z);
    z1.show(); 
    Number z3=z;
    z3.show();
    return 0;
}