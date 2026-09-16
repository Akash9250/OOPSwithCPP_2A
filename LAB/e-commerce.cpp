#include <iostream>
using namespace std;

class Product {
    int productId;
    string name;
    float price;

public:
    Product(int id, string n, float p) {
        productId = id;
        name = n;
        price = p;
    }

    Product comparePrice(const Product &p) {
        if (price > p.price)
            return *this;
        else
            return p;
    }

    void display() {
        cout << "Product ID: " << productId << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p1(101, "Laptop", 55000);
    Product p2(102, "Mobile", 30000);

    Product higher = p1.comparePrice(p2);

    cout << "Product with Higher Price:" << endl;
    higher.display();

    return 0;
}