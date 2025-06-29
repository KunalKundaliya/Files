// #include <iostream>
// #include <string>
// using namespace std;
// class Vehicle
// {
// public:
//     string brand = "Ford";
//     void honk()
//     {
//         cout << "Tuut, tuut! \n";
//     }
// };
// // Derived class
// class Car : public Vehicle
// {
// public:
//     string model = "Mustang";
// };
// int main()
// {
//     Car myCar;
//     myCar.honk();
//     cout << myCar.brand + " " + myCar.model;
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;
// class MyClass
// {
// public:
//     void myFunction()
//     {
//         cout << "Some content in parent class."<<endl;
//     }
// };
// // Derived class (child)
// class MyChild : public MyClass
// {
// };
// // Derived class (grandchild)
// class MyGrandChild : public MyChild
// {
// };
// int main()
// {
//     MyGrandChild myObj;
//     myObj.myFunction();
//      // Call the function from the parent class (MyClass)
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;
// // Base class
// class MyClass
// {
// public:
//     void myFunction()
//     {
//         cout << "Some content in parent class." << endl;
//         ;
//     }
// };
// // Another base class
// class MyOtherClass
// {
// public:
//     void myOtherFunction()
//     {
//         cout << "Some content in another class." << endl;
//     }
// };
// // Derived class
// class MyChildClass : public MyClass, public MyOtherClass
// {
// };

// int main()
// {
//     MyChildClass myObj;
//     myObj.myFunction();
//     myObj.myOtherFunction();
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
}