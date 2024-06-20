// Given an integer N, return true if it is a palindrome else return false.

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool pal(int n){
    int rev=0;
    int dup=n;
    while(n>0){
        int x = n%10;
        rev = (rev*10) + x;
        n=n/10;
    }
    if(dup==rev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num = 4554;
    if(pal(num)){
        cout << num << " is a palindrome" << endl;
    }
    else{
        cout << num << " is not a palindrome" << endl;
    }
    return 0;
}