#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //precompute:
    // Step 1 - Pre-storing: In this step, we will create an array(named hash array) of size 13
    // initialized with 0. In this hash array, we are going to store the frequency of each element.
    // To do so, we will iterate over the given array, and for each element arr[i], 
    // we will do hash[arr[i]] += 1.

    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        
        // fetching:
        // Step 2 - Fetching: In this step, we will select each query i.e. the number and for the 
        // query, we will just fetch the value of hash[number] and return it instead of running a 
        // ‘for loop’ every time. 

        cout << hash[number] << endl;
    }
    return 0;
}