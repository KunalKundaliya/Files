#include <iostream>
using namespace std;
class Simple{
    int data1;
    int data2;  
public:
    Simple(int a=3, int b=4){
        data1 = a;
        data2 = b;
    }
    void showData(){
        cout << "Data1: " << data1 << ", Data2: " << data2 << endl;
    }
};
int main() {
    Simple obj(10, 20);
    obj.showData();
    Simple obj2(36);
    obj2.showData();
    Simple obj3;
    obj3.showData();
    return 0;
}