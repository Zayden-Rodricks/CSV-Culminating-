#include <iostream>
#include <string>
using namespace std;

int main(){
    string user_string;
    cout << "Give me a string" << endl;
    cin >> user_string; 
  // check how many of each vowel 
  //print which vowel occurs the most if theres a tie print both 
    int size = user_string.length();
    int a = 0;
    int e = 0;
    int i_counter = 0;
    int o = 0;
    int u = 0; 

    for (int i = 0; i < user_string.length(); i++) {
        if (user_string[i] == 'a') {
            a++;
        }
        else if (user_string[i] == 'e') {
            e++;
        }
        else if (user_string[i] == 'i') {
            i_counter++;
        }
        else if (user_string[i] == 'o') {
            o++;
        }
        else if (user_string[i] == 'u') {
            u++;
        }
    } 
    if (a>e && a>i_counter && a>o && a>u){
        cout << "a is the most vowel" << endl;
    }
    else if(e>a && e> i_counter && e>o && e>u){
        cout <<"e is the most vowel" << endl;
    }
    else if(i_counter>a && i_counter> e && i_counter>o && i_counter>u){
        cout << "i is the most vowel" << endl;
    } 
    else if (o>a && o>e && o>i_counter && o>u){
        cout << "o is the most vowel" << endl;
    } 
    else if (u>a && u>e && u>i_counter && u>o){
        cout <<"u is the most vowel"<< endl; 
    } 
    else if (a==e || e==a){
        cout <<"a and e"<< endl;     //ae ai ao au, ei eo eu, io iu, uo  //ae  ie oe ue  
    }
    else if (a==i_counter || i_counter==a){
        cout <<"a and i "<< endl; 
    }
    else if (a==o || o==a){
        cout <<"a and o"<< endl; 
    }
    else if (a==u || u==a){
        cout <<"a and u"<< endl;
    }
    else if (e==i_counter || i_counter==e){
        cout <<"e and i"<< endl;
    }
     else if (e==o || o==e){
        cout <<"e and o"<< endl;
    } 
    else if (e==u || u==e){ 
        cout <<"e and u"<< endl;
    }
    else if (i_counter==o || o==i_counter ){
        cout <<"i and o"<< endl;
    }
    else if (i_counter==u || u==i_counter){
        cout <<"i and u"<< endl;
    } 
    else if (u==o || o==u){
        cout << "u and o" <<endl;
    }
}
    