#include <iostream>
using namespace std;

int main(){
    // Typecasting in C++
    //Type conversion is the process of converting one data type into another.
    
    // Conversion (implicit)

    // implicit conversion : small data type to large data type
    float x = 3.146349844454544444f;

    cout << "float x : " << x << " with size of : " <<sizeof(x) << endl;

    double y = x;
    cout <<"double :"<< y << " with typeof : " << sizeof(y) << " : Hence double" << endl;


    // Getting ASCII value of char
    char grade = 'A'; // Capital A
    char small_grade = 'a';

    int num = grade;
    int marks = small_grade;


    cout << "ASCII value of A is : " << num << endl;
    cout << "ASCII value of a is : " << marks << endl;


    




    // Explicit conversion : large or big data type to small data type
    double price = 100.98;

    int newPrice = (int) price;
    cout << newPrice << endl;
    return 0;


}