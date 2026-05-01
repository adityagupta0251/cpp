// #include<bits/stdc++.h> for this tutorial
#include<iostream>
#include<vector>
using namespace std;



// Vector

// btw , if you know the we use or create array like this
// arr[3] : arr[n] , here n for numbers to total element in Array
// arr[3] = {1, 2, 3}

// It does creates contiguos memory allocation for this array like following :
// [ 1 | 2 | 3 ]
// Here Vector is very similar as C++ Array
// The things why we need is , if array already exists
// Fact 1 : Array's size is constant , we can't increase its size during Runtime
// To solve this problem , here it comes C++ Vector , since its dynamic so it can resize Its (Array's size) while in runtime process

// How to create a Vector :
// vector<int> your_vector_name; : Its more like we initialize vector
// vector<int> vec = {1, 2};

// How vector's size grows in memory :
//


// Vector's Method or Function : for

// These all works on O(1) time complexity

// size & capacity
// push_back & pop_back
// emplace_back
// at() or []
// front & back


// These all works on O(n) time complexity
// erase
// vec.erase(vec.begin())



// insert
// clear
// empty


// Vector's size is basically no. of elements in a vector.
// let say we have [1 | 2 | 3 | ] since there are 3 elements in a vector , therefore its size will be 3

// But ,Vector's capacity is basically is no. of elements that it can currently hold

// [1] : sz 1
// [1 | 2] : sz 2
// [1 | 2 | 3 |  |] // No. of capacity will & is now doubled when it fills-up : sz 3 & capacity 4
 
// Accessing data via going to specific index in Vectors :
// vec[idx]
// or vec.at(idx) 


// front
// vec.front()

// back
// vec.back()


void result(vector<int> vec){
   for(int val : vec){
     cout << val << " ";
     
   }
   cout << endl;
   
 }

int main(){
  // vector<int> vec; // We initialized a vector , The size of vector is initially 0.

  
  
  // vec.push_back(1);
  // vec.push_back(2);
  // vec.push_back(3);
  // vec.push_back(4);
  // vec.push_back(5);
  // vec.emplace_back(6);
  // vec.pop_back();
  
  
/*  
  // To check its size :
  cout << "The size of vector is : " <<vec.size() << endl;

  // To check its capacity :
  cout << "The capacity of vector is : "<< vec.capacity() << endl; 

  // To print all elements in Vector :
  cout << "All the elements are : ";
  for(int val : vec){
    cout << val << " ";
    
  }
  cout << endl;

  cout << "val at idx 2 is " << vec[2] << " or " << vec.at(2) << endl;

  cout << "val at front is : " << vec.front() << endl;
  cout << "val at back is : " << vec.back() << endl;
*/

/*
  vector<int> vec = {1, 2, 3 , 4, 5};
  for(int val: vec){
    cout << val << " ";
    
  }
  cout << endl;

  // To create a vector with given n elements & with repeating the same value n times :
  vector<int> vec2(3, 10);
  for(int val_for_vec2 : vec2){
    cout << val_for_vec2 << " ";
    
  }
  cout << endl; 
  // Output : 10 10 10


  // To intialize vec5 from refrencing or copying vec4 elements :
  vector<int> vec4 = {12, 22, 32 , 89};
  vector<int> vec5(vec4);

  cout << "Output from vec4 : ";
  for(int val4 : vec4){
    cout << val4 << " ";
    
  }
  cout << endl;

  cout << "Output from vec5 : "; 
  for(int val5 : vec5){
    cout << val5 << " ";
    
  }
  cout << endl;
*/


 // Now let's examine vec.erase()
 vector<int> vec = {1, 12, 123, 1234, 12345};
 vec.erase(vec.begin());
 

  
 
  
 
 // Output will be : 1, 12, 123, 1234, 12345


 // How to delete the value from custom index : let's examine with idx : 2
 vec.erase(vec.begin() + 2);
 result(vec);
 
 
  
  return 0;
  
  
}

