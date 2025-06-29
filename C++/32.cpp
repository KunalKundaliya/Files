#include <iostream>
#include <cmath> // For sqrt and pow functions
using namespace std;
class Pointer
{
private:
    int x, y, z;

public:
    Pointer(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void displaypointer()
    {
        cout <<("x,y,z :")<<x<<","<<y<<","<<z<<endl;
    }
    friend double calculateDistance(Pointer &p1, Pointer &p2); // Declare as friend
};

double calculateDistance(Pointer &p1, Pointer &p2)
{ // Allow Pointer to access private members of Pointer
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    int dz = p2.z - p1.z;
    return sqrt(pow(dx,2)+pow(dy,2)+ pow(dz, 2));
}

int main()
{
    Pointer p1(0, 0, 0);
    Pointer p2(1, 0, 0);
    p1.displaypointer();
    p2.displaypointer();
    cout << "Distance: " << calculateDistance(p1, p2) << endl;
    return 0;
}