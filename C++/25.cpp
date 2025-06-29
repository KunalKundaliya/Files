#include <iostream>
using namespace std;
class Employee {
    int id;
    int salary;
    public:
    void setId(int i) {
        salary=122;
        cout<<"Enter the id of employee: ";
        cin>>id;
    }
    void getId(void){
        cout<<"The id of employee is: "<<id<<endl;
    }
};
int main() {
    // Employee emp1, emp2;
    // emp1.setId(1);
    // emp1.getId();
    // emp2.setId(2);
    // emp2.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++) {
        fb[i].setId(i+1);
        fb[i].getId();
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// class Employee {
//     int a;
//     int b;
//     public:
//     void setData(int v1,int v2){
//         a=v1;
//         b=v2;
//     }
//     void getDataBySum(Employee e1, Employee e2){
//         a=e1.a+e2.a;
//         b=e1.b+e2.b;
//     }
//     void printNumber(){
//         cout<<"Complex numbeer is: "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// int main() {
//     Employee e1,e2,e3;
//     e1.setData(2,3);
//     e1.printNumber();
//     e2.setData(4,5);
//     e2.printNumber();
//     e3.getDataBySum(e1,e2);
//     e3.printNumber();
//     return 0;
// }