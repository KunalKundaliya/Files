#include<iostream>
using namespace std;
/* this is a keyword whcih is a pointer whuch points to the obj
which invokes the member function. */
class A
{
    int a;

public:
    A &setData(int a)
    {
        this->a = a;
        return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4).getData();
    return 0;
}

// #include <iostream>
// using namespace std;
// class A
// {
//     int a;

// public:
//     void setData(int a)
//     {
//         this->a = a;
//     }

//     void getData()
//     {
//         cout << "The value of a is " << a << endl;
//     }
// };
// int main()
// {
//     A a;
//     a.setData(4);
//     a.getData();
//     return 0;
// }
