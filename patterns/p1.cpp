// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *

#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int N=5;
    pattern(N);
    return 0;
}

