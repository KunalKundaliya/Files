#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // Operators in C++ prescendence
    int a=4,b=78,c=1233;
    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    int d=(a*5)+(b*6);
    cout<<d<<endl;
}