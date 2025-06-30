// oop_items.cpp
#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;
    Item(const string& n, int q) : name(n), quantity(q) {}
    virtual ~Item() = default;
    virtual void display() const = 0;  // pure virtual
};

class Perishable : public Item {
public:
    Perishable(const string& n, int q) : Item(n, q) {}
    void display() const override {
        cout << name << " (Perishable), Qty: " << quantity << endl;
    }
};

class NonPerishable : public Item {
public:
    NonPerishable(const string& n, int q) : Item(n, q) {}
    void display() const override {
        cout << name << " (Non‑Perishable), Qty: " << quantity << endl;
    }
};

int main() {
    Item* milk   = new Perishable("Milk",  10);
    Item* cereal = new NonPerishable("Cereal", 20);

    milk->display();
    cereal->display();

    delete milk;
    delete cereal;
    return 0;
}
