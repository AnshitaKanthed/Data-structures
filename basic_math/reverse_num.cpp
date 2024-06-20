// Given an integer N return the reverse of the given number.

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n=123;
    // cin >> n;
    int rev = 0;
    while(n>0){
        int x = n%10;
        rev = (rev * 10) + x;
        n = n/10;
    }
    cout << rev;
}