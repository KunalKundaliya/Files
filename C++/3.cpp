// // 1.00
// #include <iostream>
// #include <stdio.h>
// using namespace std;
// int c = 45;//global variable
// int main()
// {
//     int a, b, c;
//     cout << "Enter the value of a:" << endl;
//     cin >> a;
//     cout << "Enter the value of b:" << endl;
//     cin >> b;
//     cout << "The sum is " <<a + b << endl;
//     cout << "The global sum is " << ::c<<endl;

//     float d = 34.4f;
//     long double e = 34.4l;
//     cout << "The value of d is " << d << endl;
//     cout<< "The value of e is " << e << endl;
//     return 0;
// }

// 2.00
// #include <iostream>
// using namespace std;
// int c = 45;
// int main()
// {
//     float d = 34.4;
//     long double e = 34.4l;
//     cout << "The size of 34.4 is " << sizeof(34.4) << endl;
//     cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
//     cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
//     cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
//     cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

//     // ****Reference Variables ****
//     // rohan das-- > monty-- > rohu--->dangerous coder
//     float x = 4455;
//     float &y = x;
//     cout << x << endl;
//     cout <<y << endl;

//     // **Type Casting * /
//     int a = 45;
//     float b = 34.34;
//     cout << "The value of a is " << (double)a<<endl;
//     cout << "The value of b is " << (int)b<<endl;
// }