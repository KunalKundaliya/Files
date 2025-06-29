#include <iostream>
using namespace std;
// class vector
// {
//     int *arr;
//     int size;

// public:
// };

//Syntax  for template class
template <class T>
class vector
{
    T *arr;
    int size;

public:
    vector(T *arr){}
    // and many other methods
};

int main()
{
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
} 