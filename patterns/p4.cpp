// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6

#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    int N=5;
    pattern(N);
    return 0;
}