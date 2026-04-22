// function Synatx
// Also we need to declare the return type which would going to use globally
// after work done.
//
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// No return type : doesn't returns anything
// function definition
//void printHello() {
//  cout << "hello\n";
//
//}



// Returning value from a function
int printHello() {
  cout << "hello\n";
  return 3;
}



// Parameters in functions
// We are creating a function which evaluates the sum of two integers
int sum(int a , int b){
  int s = a + b;
  return s;

}




int main() {
  // cout << "Hello world!!" << endl;
  // In programing we uses functions for use as a tool to call it when we need to repetedly do some works
  // Functions are basically takes input or as parameter & throws output , & where we need to assign its return type.
  // Basicallt type of Output



  // let say : Here int is it's return type
  // int main() {
  //
  //
  //   return 0;
  // }



  // Calling/Invoking a function :-
  // printHello();



  // int a = 10;
  // int b = -5;
  // cout << "Hello\n";



  // Now using those retuned value
  int val = printHello();
  cout << "val = " << val << endl;


 // Or We can direectly return it with
 // cout << printHello() << endl;
 //
 //


 // Calling a function & giving it the require a & b as parameter to test
 cout << sum(10, 7) << endl;


  return 0;
}
