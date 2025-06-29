#include <iostream>
using namespace std;
int main() {
    int marks[4]={10,20,30,40};
    int *p=marks;
    marks[3]=44; // p points to the first element of the array
    cout<<"The value of marks[0] is: "<<*p<<endl;
    cout<<"The value of marks[1] is: "<<*(++p)<<endl;
    cout<<"The value of marks[2] is: "<<*(--p+2)<<endl; // prints the value of the first element of the array
    cout<<*(p+1)<<endl;return 0; // prints the address of the first element of the array
}
