#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void log_for_vector(vector<int> vec){
  for(int val : vec){
    cout << val << " ";
    
  }
  cout << endl;
  
  
}

int main(){
  // How the erase the vector's element within the given range : [start , ) , means start is included but end doesn't
  
  vector<int> vec = { 1, 12, 123, 1234, 12345, 123456};
  vec.erase(vec.begin() + 0, vec.begin() + 2);
  
  log_for_vector(vec);
  // Output will be : 123 1234 12345 123456


  // Vector insert
  // unlike push_back , where we insert at the end , but with vector insert : we can insert element at any selected index
  // vec.insert(position, value);
  
  vector<int> first = { 1, 2, 3, 4, 5, 6};
  first.insert(first.begin() + 3, 12);

  log_for_vector(first);

  // first.clear();
  
  cout << "size : " << first.size() << endl;
  cout << "capacity : " << first.capacity() << endl;

  // Check if Vector is empty :
  cout << "is empty : "<< first.empty() << endl;
  // Output 1 : means yes
  
  
  
  
  
  return 0;
  
}
