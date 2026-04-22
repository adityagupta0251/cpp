#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int secmain(); // Prototype: Let main know secmain exists
int main(){
  // Do 1.cpp problem as * Pattern format 
  int n = 4;

  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=n; j++){
      cout << "*" << " ";


    }
    cout << endl;
  }

  cout << "Also " << endl;
  secmain();
  return 0;
}

int secmain(){
  int e = 4;
  for(int k = 0; k<= e-1 ; k++ ){
    for(int f = 0; f<=e-1; f++){
      cout << "*" << " ";

    }
    cout << endl;
  }
  return 0;
}
// Solved Completely !
