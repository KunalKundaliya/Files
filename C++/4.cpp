// #include <iostream>
// #include <stdio.h>
// using namespace std;
// // One way of using struct.
// struct employee{
//     int id;
//     char favchar;
//     float salary;
// };
// int main() {
//     struct employee Harry;
//     Harry.id = 1;
//     Harry.favchar = 'c';
//     Harry.salary = 120000.0;
//     cout << Harry.id << endl;
//     cout << Harry.favchar << endl;
//     cout << Harry.salary << endl;

//     return 0;
// }

// Another way of using struct.
// typedef struct employee
// {
//     int id;
//     char favchar;
//     float salary;
// } ep;


// union money
// {
//     int rice;         // 4 bytes
//     char car;         // 1 byte
//     float pound_fish; // 4 bytes
//     // it is used for better memory management.
//     // it can store only one value at a time.
//     // it is used to save memory.
//     // it is used to store different data types in the same memory location.
// }


// int main() {
// union money m1;
// m1.rice = 34;
// cout << m1.rice << endl;
// cout << m1.car << endl;
// cout << m1.pound_fish << endl;

// ep Harry;
// Harry.id = 1;
// Harry.favchar = 'c';
// Harry.salary = 120000.0;
// cout << Harry.id << endl;
// cout << Harry.favchar << endl;
// cout << Harry.salary << endl;

// enum Meal{breakfast, lunch, dinner};
// cout<<breakfast<<endl;
// cout<<lunch<<endl;
// cout<<dinner<<endl;
// Meal m1 = breakfast;
// printf("%d\n", m1);
// }
