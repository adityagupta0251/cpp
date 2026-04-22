#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  //Patterns - (Practice of : For loops while loops , Do while loops)
  //Why we learn it : For better understanding of Loops Concept
  //For Loops is deafult there to use in Patterns Problems
  



  // For same line integer printing
  //
  //
  // 1. Square Patterns
  // Ex : With ASCII value
  // 1 2 3 4
  // 1 2 3 4
  // 1 2 3 4
  // 1 2 3 4



  //int num = 0;
  int n = 4; //Total number of lines 

// Total lines = 4 & how much the frequency of repeating this line is also 4 as shown above
// Process with Implementation & explanantion
// 1.Outer Loops => N times (1 to n)
// 2. 1 single row => innerloops

  for(int i = 1; i<=n ; i++){ //Outer Loops (How much times => n no.)
    for(int j = 1; j<=n; j++){ // Do this (Inner Loops)
      cout << j << " ";

    }
    cout << endl;
  }
// Ultimately do inner loops evaluation (1 2 3 4 ) n times : means till 4 line end



}
