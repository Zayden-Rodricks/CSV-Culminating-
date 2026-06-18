#include <iostream>
using namespace std;

int main() {
    char user_type;
    char user_output_type; 
    double temp; //includes decimals 
    double answer;

    cout << "What type are you inputting? C, F, or K(Uppercase): ";
    cin >> user_type;
    cout << "What do you want to convert to? C, F, or K(Uppercase): ";
    cin >> user_output_type;
    cout << "Enter temp: ";
    cin >> temp;

    if (user_type == 'C' && user_output_type == 'F') {
        answer = (temp * 9 / 5) + 32;
        cout << temp << "C = " << answer << "F" << endl;
    }
    else if (user_type == 'C' && user_output_type == 'K') {
        answer = temp + 273.15;
        cout << temp << "C = " << answer << "K" << endl;
    } 
    else if (user_type == 'F' && user_output_type == 'C') {
        answer = (temp - 32) * 5 / 9;
        cout << temp << "F = " << answer << "C" << endl; 
    }
    else if (user_type == 'F' && user_output_type == 'K') {
        answer = (temp - 32) * 5 / 9 + 273.15;
        cout << temp << "F = " << answer << "K" << endl;           
    }
    else if (user_type == 'K' && user_output_type == 'C') {
        answer = temp - 273.15;
        cout << temp << "K = " << answer << "C" << endl;
    }     
    else if (user_type == 'K' && user_output_type == 'F') {
        answer = (temp - 273.15) * 9 / 5 + 32;
        cout << temp << "K = " << answer << "F" << endl;
    }
    else if (user_type == user_output_type) { //incase you pick same input output 
        cout << temp << user_type << " = " << temp << user_output_type << endl;
    } 
    else { 
        cout << "Invalid Choice" << endl;
    }

    return 0;
}