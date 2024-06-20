// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6

#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for(int i=1;i<N;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int N=5;
    pattern(N);
    return 0;
}