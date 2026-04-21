#include <iostream>
using namespace std;

int main(){
    // Let a & b be two variables
    int a,b;
    a = 10;
    b = 5;
    int sum = a + b; // here + is a binary operator because it takes two operands a & b
    cout << "sum is = " << sum << endl;


    // Unary operator : it takes only one operand (Increment and Decrement operator)
    // increment or decrement the value of a variable by 1
    int x = 5;
    x++; // or x = x + 1

    // or
    int c = 7;
    int d = c++;
    cout << "value of d is = " << d << endl; // Output: 7
    cout << "value of c is = " << c << endl; // Output: 8
    // cout << "value of x after increment is = " << x << endl; // Output: 6

    // Decrement operator
    int v = 9;
    v--; // or v = v - 1

    //or 
    int g = 34;
    int f = g--;
    cout << "value of f is = " << f << endl; // Output: 34
    cout << "value of g is = " << g << endl; // Output:
    // cout << "value of v after decrement is = " << v << endl; // Output: 8


    // first increment or decrement the value and then assign it to another variable
    int p = 10;
    int q = ++p; // first increment the value of p by 1 and then assign it to q
    cout << "value of p is = " << p << endl; // Output: 11
    cout << "value of q is = " << q << endl; // Output: 11

    // first decrement the value and then assign it to another variable
    int m = 20; 
    int n = --m; // first decrement the value of m by 1 and then assign it to n
    cout << "value of m is = " << m << endl; // Output: 19
    cout << "value of n is = " << n << endl; // Output: 19
    
    return 0;
    
}