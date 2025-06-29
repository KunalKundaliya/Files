#include <iostream>
using namespace std;
class BankDeposit {
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;
public:
    BankDeposit(){} // Default constructor
    BankDeposit(int p, int y, float r); // Parameterized constructor.
    void show(); // Function to display the values of the data members
};
BankDeposit::BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate =float(r)/100;
    returnValue = principal;
    for (int i = 0; i < years; i++) {
        returnValue *= (1 + interestRate);
    }
};
void BankDeposit::show(){
    cout << "Principal amount was: " << principal << endl;
    cout << "Return value after " << years << " years is: " << returnValue << endl;
    cout << "Interest rate was: " << interestRate * 100 << "%" << endl;
    cout << endl;
}
int main() {
    BankDeposit bd1, bd2; // Creating objects of class BankDeposit
    int p, y;
    float r;
    cout << "Enter the principal amount, number of years and interest rate: " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r); // Using parameterized constructor to initialize bd1
    bd1.show(); // Displaying the values of bd1
    return 0;
}