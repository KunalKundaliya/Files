#include <iostream>
using namespace std;
class c2;

class c1
{
    private:
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main()
{
    c1 obj1;
    c2 obj2;
    obj1.indata(10);
    obj2.indata(20);
    cout << "Before exchange:" << endl;
    cout << "obj1 : ";
    obj1.display();
    cout << "obj2 : ";
    obj2.display();
    exchange(obj1, obj2);
    cout << "After exchange:" << endl;
    cout << "obj1 : ";
    obj1.display();
    cout << "obj2 : ";
    obj2.display();
    return 0;
}