#include <iostream>
using namespace std;

int main(){

    // Arthmetic operator
    int a = 10, b = 4;
    int sum = a + b;
    cout << sum << endl;
    // or 
    cout << "sum is = " << (a+b) << endl;
    cout << "difference is = "<< (a-b) << endl;
    cout << "product is = "<< (a*b) << endl;
    cout << "quotient or division is = "<< (a/b) << endl;

    // Modulo operator in Arithmetic operator
    cout << "remainder or modulo is = "<< (a%b) << endl;

    // when dividing two integers the result will be an integer
    // if we want a precise result we need to convert one of the numbers to float or double
    int ab = 13;
    float dd = 2;
    // or we can let double 
    double dc = 23;

    cout << (ab / dd) << endl;
    cout << (ab / dc) << endl;

    // Using type casting the value 
    cout << "using type casting the value of double is = " << (13/ (double)5) << endl; // Output: 2.6

    // key point : 
    int ans = 13/(double)5;  // Output: 2
    cout << ans << endl;
    // because the ans variable is or store as int or integer so it will store only integer part


    
}