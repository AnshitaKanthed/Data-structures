// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=N;j>i;j--){
            cout << N-j+1 << " ";
        }
        cout << endl;
    }
}

int main(){
    int N=5;
    pattern(N);
    return 0;
}