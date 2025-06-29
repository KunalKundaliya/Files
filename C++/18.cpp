#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}
int fibonacci(int n)
{
    if (n<=1){
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Fibonacci of "<<n<<" is: "<<fibonacci(n)<<endl;
    return 0;
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;
    return 0;
}
int main() {
    int result = sum(10);
    cout << "The sum of 10 numbers is "<<result;
    return 0;
}