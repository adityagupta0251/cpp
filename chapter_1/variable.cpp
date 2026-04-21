#include <iostream>
using namespace std;

int main(){
    // Integer datatypes
    int age = 25;
    cout << age << endl; // Integer output
    cout << sizeof(age) << endl; // Size of the integer variable will be : 4 bytes
    cout <<"Hello Aditya " << + age << endl; // String & integer concatenation


    //char datatype
    // occupies 1 byte of memory
    char grade = 'A';
    cout <<  "char : " << grade << " with size of "<< sizeof(grade) << endl; // Character output

    //float datatype
    float pi = 3.14f;
    cout << pi << endl;
    cout << "datatype of float : "<< pi << " with size of "<< sizeof(pi)<< "bytes" << endl;

    //double datatype
    double dou = 3.22287878787;
    cout << dou << endl;
    cout << "datatype of double : " << dou << " with size of "<< sizeof(dou)<< "bytes" << endl;

    //boolean datatype
    bool isSafe = true;
    cout << isSafe << endl; // Output will be 1 if true and 0 if false
    cout << "datatype of boolean : " << isSafe << " means true.. " << " with size of "<< sizeof(isSafe)<< "bytes" << endl;


    return 0;
}