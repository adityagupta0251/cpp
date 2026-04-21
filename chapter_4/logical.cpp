#include <iostream>
using namespace std;

int main(){
    // Logical operator : it return the value in boolean form (true or false) either true or false if true it return 1 and if false it return 0
    

    // && logical AND operator : it return true if both the conditions are true otherwise it will return false
    cout << "if && logical AND operator : " << ((3 < 5) && (5 > 2)) << endl; // it will return 1 because both the conditions are true

    // || logical OR operator : it return true if any one of the conditions is true otherwise it will return false
    cout << "if || logical OR operator : " << ((6 < 5) || (4 < 2)) << endl; // it will return 0 because one of or anyone of the conditions is false


    // ! logical NOT operator : it return true if the condition is false and it return false if the condition is true
    cout << "if ! logical NOT operator : " << !(4 < 2) << endl; // it will return 1 because the condition is false so it will return true
    cout << "if ! logical NOT operator : " << !(5 > 2) << endl; // it will return 0 because the condition is true so it will return false

}