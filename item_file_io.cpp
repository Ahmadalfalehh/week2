// item_file_io.cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    void saveToFile() const {
        ofstream out("items.txt");
        if (!out) {
            cerr << "Error opening file for write.\n";
            return;
        }
        out << name << "," << quantity << "\n";
        cout << "Saved: " << name << "," << quantity << endl;
    }

    void loadFromFile() const {
        ifstream in("items.txt");
        if (!in) {
            cerr << "Error opening file for read.\n";
            return;
        }
        string line;
        while (getline(in, line)) {
            cout << "File: " << line << endl;
        }
    }
};

int main() {
    Item tool;
    tool.name     = "Screwdriver";
    tool.quantity = 10;

    tool.saveToFile();
    tool.loadFromFile();  // optional

    return 0;
}
