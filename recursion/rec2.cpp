// Print Name N times using Recursion

#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i>n) return;
    cout << "Gappu" << endl;

    func(i+1,n);
}

int main(){
    int n = 5;
    func(1,n);
    return 0;
}