#include <iostream>
using namespace std; 

int main(){
    string inventory_object[] = {"map", "torch", "shovel", "coins"};  //have to declare type of array
    int quantity[] = {5, 24, 1, 0};

    
    cout << "Enter object name: ";
    string user_search;
    cin >> user_search;
    
    for (int i = 0; i < 4; i++) {
        if (user_search == inventory_object[i]) {
            cout << "Item found" << endl;
            cout << "You have: "  << quantity[i];

            if (quantity[i] > 0) {
                cout << " available" << endl;
            } else {
                cout << " so not available" << endl;
            }
            return 0;
        }
    }

    cout << "Item not found in inventory" << endl;

    return 0;
}
