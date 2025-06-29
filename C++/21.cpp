#include <iostream>
using namespace std;
class Shop{
    int itemId[100];
    float itemPrice[100];
    int counter;
public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void getPrice(void);

}shop;
void Shop::setPrice(void) {
    cout << "Enter the item ID: "<<counter+1<<endl;
    cin >> itemId[counter];
    cout << "Enter the item price: ";
    cin >> itemPrice[counter];
    counter++;
}
void Shop::getPrice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "Item ID: " << itemId[i] << ", Item Price: " << itemPrice[i] << endl;
    }
}
int main() {
    shop.initCounter();
    shop.setPrice();
    shop.setPrice();
    shop.setPrice();
    shop.getPrice();
    return 0;
}
