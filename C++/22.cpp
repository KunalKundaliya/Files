#include <iostream>
using namespace std;
class Employee
{
    int id;
    int count;

public:
    void setData(void)
    {
        cout << "Enter the id of employee: " << endl;
        cin >> id;
    }
    void getData(void)
    {
        cout << "The id of the employee is: " << id << endl;
    }
} harry;
int main()
{
    harry.setData();
    harry.getData();
    return 0;
}