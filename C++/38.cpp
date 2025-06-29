#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;

public:
};
/*
For a protected member:
                    Public derivation   Private derivation  Protected derivation
1.Private members       Not Inherited      Not Inherited     Not Inherited
2.Protected members     Protected          Private            Protected
3.Public members        public             Private            Protected
*/
class Derived :protected Base{

};
int main()
{
Base b;
Derived d;

    return 0;
}
