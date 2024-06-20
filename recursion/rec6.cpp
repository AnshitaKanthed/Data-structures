// Print N to 1 using Recursion
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   if(i>n) return;
   
   // Function call to print (i+1) integers.
   func(i+1,n);
   cout<<i<<endl;
}

int main(){
  int n = 4;
  func(1,n);
  return 0;
}