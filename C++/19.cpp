#include <iostream>
using namespace std;
//Function Overloading 
int sum(int a, int b)
{
    cout << "using function with 2 arguments" << endl;
    return (int)a + b;
}
int sum(int a, int b, int c)
{
    cout << "using function with 3 arguments" << endl;
    return a + b + c;
}
int volume(int a,int b,int c){
    return a*b*c;
}
int main()
{
    cout << "Sum of 2 numbers: " << sum(10, 20) << endl;     // Calls the first function
    cout << "Sum of 3 numbers: " << sum(10, 20, 30) << endl; // Calls the second function
    cout<<"Volume of cubiod :"<<volume(1,2,3)<<endl;
    return 0;
}