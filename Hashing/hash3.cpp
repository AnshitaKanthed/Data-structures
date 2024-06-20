// Given an array, we have found the number of occurrences of each element in the array.

// Solution 2: Using Map

#include <bits/stdc++.h>
using namespace std;
 
void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}



// Approach:

//     Take a unordered_map/HashMap of <Integer, Integer> pair.
//     Use a for loop to iterate the array.
//     If the element is not present in the map then insert it with frequency 1, otherwise increase the existing frequency by 1.
//     Print the value frequency pair.