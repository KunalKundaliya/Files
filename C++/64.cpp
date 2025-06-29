#include <iostream>
using namespace std;
template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int s)
    {
        size = s;
        arr = new T[size];
    }
    T dotVec(Vector &v)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->arr[i] * v.arr[i];
        }
        return sum;
    }
};
int main()
{
    // Vector v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;
    // Vector v2(3);
    // v2.arr[0] = 4;
    // v2.arr[1] = 5;
    // v2.arr[2] = 6;
    // cout << "Dot product: " << v1.dotVec(v2) << endl;
    Vector<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    Vector<int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    cout << "Dot product: " << v1.dotVec(v2) << endl;
}