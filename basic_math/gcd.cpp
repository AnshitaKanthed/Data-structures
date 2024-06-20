// Given two integers N1 and N2, find their greatest common divisor.
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int n1, int n2){
    int gcd = 1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main(){
    int n1=20, n2=15;
    int gc=gcd(n1,n2);
    cout << gc << endl;
    return 0;
}