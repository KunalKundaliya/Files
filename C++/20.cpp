#include <iostream>
using namespace std;

/*
OOPS :
C++ :Initially called c with classes by stroutstroup
class :extesnsion of strcutures (in c) lang
struct limitations:
    -Members public
    -No methods .abort
classes have methods and properties.
classes have few members private & few as public.
structure in c++ are typedef;
you can declare obejcts with the class _WCHAR_T_DEFINED

class Employee{
}harry;
harry.salary=34 makes no senese if salar is private.


The class keyword is used to create a class called MyClass.
The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class.
You will learn more about access specifiers later.
Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
At last, end the class definition with a semicolon ;.

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
*/
class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};
void Binary::read(void)
{
    cout << "Enter a Binary number" << endl;
    cin >> s;
}
void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binaryformat" << endl;
            exit(0);
        }
    }
}
void Binary ::ones(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void Binary::display(void)
{
    cout << "Binary number is " << s << endl;
}
int main()
{
    Binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();
    return 0;
}
