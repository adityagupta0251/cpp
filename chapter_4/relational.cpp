#include <iostream>
using namespace std;

int main(){
    // Assignment operator
    int a = 10;
    // here "= " is the assignment operator which assign the value of 10 to variable a

    // Relational operator : it return the value in boolean form (true or false) either true or false if true it return 1 and if false it return 0

    // < less than
    cout << "if < less than : " << (3 < 5) << endl; // it will return 1 because 3 is less than 5
    cout << "if < less than : " << (4 < 2) << endl; // it will return 0 because 4 is not less than 2

    // <= less than or equal to
    cout << "if <= less than or equal to : " << (4 <= 4) << endl; // it will return 1 because 4 is equal to 4
    cout << "if <= less than or equal to : " << (6 <= 3) << endl; // it will return 0 because
    
    // > greater than
    cout << "if > greater than : " << (7 > 4) << endl;
    cout << "if > greater than : " << (2 > 5) << endl;

    // >= greater than or equal to
    cout << "if >= greater than or equal to : " << (5 >= 5) << endl;
    cout << "if >= greater than or equal to : " << (3 >= 6) << endl;

    // == equal to
    cout << "if == equal to : " << (4 == 4) << endl; // it will return 1 because 4 is equal to 4
    cout << "if == equal to : " << (5 == 2) << endl; // it will return 0 because

    // != not equal to
    cout << "if != not equal to : " << (5!= 4) << endl; // it will return 1 because 5 is not equal to 4
    cout << "if != not equal to : " << (5!= 5) << endl; // it will return 0 because

    return 0;
}