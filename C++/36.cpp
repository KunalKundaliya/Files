#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.5;
    }
    Employee() {}
};
class Programmer : Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languagecode = 9;
    void getData(){
        cout<<id;
    }
};
/*Derived class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}{
class members/methods etc...}
Note:
1.Default visibility mode is private.
2.Private visibility mode :Public members of base class
becomes private members of derived class
3.Public visibility mode :Public members
of base class becomes public members of derived
class
4.Private members are never inherited.
*/
int main()
{
    Employee harry(1), rohan(2);
    cout << "Salary is " << harry.salary << endl;
    cout << "Salary is " << rohan.salary << endl;
    Programmer skillf(1);
    cout << skillf.languagecode << endl;
    cout<<"The id of the employee is ";
    skillf.getData();
    return 0;
}
