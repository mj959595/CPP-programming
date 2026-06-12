#include<iostream>
#include<conio.h>
using namespace std;

class maths {
private:
    int ItemID;
    int quantity;
    float Price;

public:
    // set values
    void values(int id, int qty, float price) {
        ItemID = id;
        quantity = qty;
        Price = price;
    }

    // display values
    void show() {
        cout << "Item ID  : " << ItemID << endl;
        cout << "Quantity : " << quantity << endl;
        cout << "Price    : " << Price << endl;
    }

    // add stock
    void restock(int qty) {
        quantity += qty;
        cout << "Updated quantity = " << quantity << endl;
    }

    // calculate total value
    float getvalue() {
        return Price * quantity;
    }
};

int main() {
    maths obj;

    obj.values(2, 3, 200.5);

    obj.show();

    obj.restock(5);

    cout << "Total Value = " << obj.getvalue() << endl;

    getch();
    return 0;
}
