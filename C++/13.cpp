#include <iostream>
using namespace std;
int main() {
    int a=5,b=10;
    int *c=&a;
    cout<<"The value of a is "<<*(&a)<<endl;
    cout<<"The  memory value of a is "<<c<<endl;
    return 0;
}