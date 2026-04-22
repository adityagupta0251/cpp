// C++ Variables : int , double, char, string, bool
#include<iostream>
using namespace std;

int main(){
  int myNum = 15;
  cout << myNum << "\n";

  // or we can :
  int myNumber;
  myNumber = 23;
  cout << myNumber << "\n";


  // Asigning Variables Values :
  int a = 12;

  // Before Asigning new Values 
  cout << a << " Before!"<< "\n";

  a = 66;
  cout << a << " After!" << "\n";

  // int - stores integers (whole numbers), without decimals, such as 123 or -123


  // double - stores floating point numbers, with decimals, such as 19.99 or -19.99
  double d = 34.33;
  double pi = 3.141592653589792;

  cout << "Double ex : " << d << endl;
  cout << "The value of PI is : " << pi << "\n";
  
  // double - stores floating point numbers, with decimals, such as 19.99 or -19.99
  // double can print only 5th index after decimals
  //
  // char example :
  char ch = 'd';
  char chH = 'D';

  cout << ch << "\n";
  cout << chH << "\n";
  // Get the ASCII value of a character
  cout << "ASCII value of " << chH << " is " << int(chH) << endl; // Output: ASCII value of A is 65
  string greeting = "Congratulation Boy!";
  cout << greeting << endl;
  

  // String Concatenation :
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName << endl;

  string mfirstName = "Aditya ";
  string llastName = "Gupta";
  string cname = mfirstName.append(llastName);
  cout << cname << endl;



  return 0;
  



}
