#include <iostream>
using namespace std;
int main()
{
    /*Pointer:
    It is an data type which holds the adress of other's data type.*/
    int a = 3;
    int *b = &a;
    cout<<"The address of a is "<<b<<endl;
    //It help us to get the address of var a in memory storage.
    // & is used to get the address of operator.
    // * is used to dereference the pointer, i.e., get the value at the address stored in the pointer.
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;//it will print the address of a in the memory.
    cout<<"The value of a is "<<*b<<endl;//it will print the value of a in the memory.
    int **c = &b; // pointer to pointer
    cout<<"The address of b is "<<c<<endl;
    cout<<"The adddress of b is "<<&b<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address (value at) value c is "<<**c<<endl; 
    //it will print the address of b in the memory.
    return 0;
}