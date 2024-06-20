// Given an integer N, return the number of digits in N. 

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(int n){
    int cnt = 0;
    while(n > 0){
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}

int main(){
    int n = 329823;
    cout << "N: "<< n << endl;
    int digits = count(n);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}