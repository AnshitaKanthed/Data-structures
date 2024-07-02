// Given an array of integers, move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1; // Initialize a pointer to track the first zero found
    // Find the first zero in the array and set the pointer j
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i; 
            break; 
        }
    }
    // If no zero is found, return the original array
    if (j == -1) return a;
    // Iterate through the array starting from the element after the first zero
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) { // If the current element is not zero
            swap(a[i], a[j]); 
            j++; // Move the pointer j to the next position
        }
    }

    return a; 
}
int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10; // Size of the array
    vector<int> ans = moveZeros(n, arr);

    cout << "After moving zeroes to the end: " << endl;
    for (auto &it : ans) { // Iterate through the result array
        cout << it << " "; // Print each element
    }
    cout << '\n';
    return 0;
}
