// Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int search(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) { 
        if (arr[i] == num)        
            return i;             
    }
    return -1; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int num = 4;                 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int val = search(arr, n, num); 
    cout << val << endl; 
    return 0;
}
