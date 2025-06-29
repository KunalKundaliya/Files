#include <iostream>
using namespace std;
class Y; // Forward declaration of class Y
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Sum data of X and y is " << o1.data + o2.num; // Accessing private members of X and Y
}
int main()
{
    X obj1;
    Y obj2;
    obj1.setValue(10);
    obj2.setValue(20);
    add(obj1, obj2);
}
/*
As shown in a code snippet 1,
1.1st class “Y” is declared at the top which is known as forward declaration to let the compiler know that this class is defined somewhere in the program
2.2nd class “X” is defined which consists of private data member “data” and public member function “setValue” which assigns the value to the private data member “data”.At the end friend function “add” is declared.
3.3rd class “Y” is defined which consists of private data member “num” and public member function “setValue” which assigns the value to the private data member “num”.At the end friend function “add” is declared.
4.4th function “add” is defined which add the value of the objects of class “X” and “Y” and print it.
*/