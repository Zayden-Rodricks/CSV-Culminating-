#include <iostream>
using namespace std;

int main() {
    string items[] = {"card", "ball", "hat"};    // create array with extra space for 2 more items
    int size = 3;
 
    cout << "Items:" << endl;
    for (int i = 0; i < size; i++) {
        cout << items[i] << endl;
    }

    items[size] = "sweater";
    size++;

    cout << endl;
    cout << "After adding sweater:" << endl; // add sweater to the end of the array and increase size by 1
    for (int i = 0; i < size; i++) {
        cout << items[i] << endl;
    }

    for (int i = 1; i < size - 1; i++) {   // remove ball at index 1 and srink size by 1 and shift items to the left
        items[i] = items[i + 1];
    }
    size--;

    cout << endl;
    cout << "After removing ball:" << endl;
    for (int i = 0; i < size; i++) {        
        cout << items[i] << endl;
    }

    return 0;
}

