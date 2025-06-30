// pointers_memory.cpp
#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

// Binary search over sorted array of Items by id
int binarySearch(Item* arr, int size, int targetId) {
    int lo = 0, hi = size - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid].id == targetId)      return mid;
        else if (arr[mid].id < targetId)  lo = mid + 1;
        else                               hi = mid - 1;
    }
    return -1;
}

int main() {
    const int N = 5;
    // Dynamically allocate
    Item* items = new Item[N]{
        {"Pencil",   101},
        {"Notebook", 105},
        {"Eraser",   110},
        {"Ruler",    115},
        {"Marker",   120}
    };

    int searchId;
    cout << "Enter item ID to search for: ";
    cin  >> searchId;

    int idx = binarySearch(items, N, searchId);
    if (idx != -1) {
        cout << "Found: " << items[idx].name
             << " (ID " << items[idx].id << ")" << endl;
    } else {
        cout << "Item with ID " << searchId << " not found.\n";
    }

    // Free memory
    delete[] items;
    return 0;
}
