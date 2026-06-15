#include <iostream>
#include <string>
using namespace std;

int main(){
    string longword = "Himynameiszayden";
    cout<< longword << endl;
    cout << longword.substr(0, 2) << endl;  
    cout << longword.substr(2, 2) << endl;
    cout << longword.substr(4, 4) << endl; 
    cout << longword.substr(8, 2) << endl; 
    cout << longword.substr(10, 6) << endl; 
    cout << "" << endl;
    
    cout << "Concatenation" <<endl; 
    cout << "add Le+bron" <<endl; 
    string firsthalf = "Le";
    string secondhalf = "bron";
    string fullword = firsthalf + secondhalf;
    cout << fullword <<endl; 
    
    string user_string;
    cout <<"Enter string:" <<endl; 
    cin >> user_string; 
    int lenght = user_string.length(); 
    cout << "Lenght of string: "<< lenght << endl; 

    string palindrome = "level"; //no user input 
    string check_palindrom = "";

    for (int i = palindrome.length() - 1; i >= 0; i--) {
        check_palindrom = check_palindrom + palindrome[i];
         } 

    if (palindrome == check_palindrom){
        cout << "Palindrome: " << palindrome << endl;
        cout <<"yes its a palindrome" <<endl;
    }
    else{
        cout << "Palindrome: " << palindrome << endl;
        cout<<"No palindrome"<< endl; 
    }
    return 0;

}