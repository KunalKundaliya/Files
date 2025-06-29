#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<< "Enter the id of the employee: " << endl;
            cin>> id;
            count++;
        }
        void getData(void){
            cout<< "The id of the employee is: " << id<<" The employee number "<<count<< endl;

        }
        static void getCount(void){
            cout<< "The value of count is: " << count << endl;
        }
};
int Employee::count=100;
int main(){
    Employee emp,rohan,lavish;
    // emp.id=101;//can't be done because id is private.
    emp.setData();
    emp.getData();
    Employee::getCount();
    
    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lavish.setData();
    lavish.getData();
    Employee::getCount();

}