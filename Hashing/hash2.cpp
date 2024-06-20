// Given an array, we have found the number of occurrences of each element in the array.

// Solution 1: Use of two loops
#include <bits/stdc++.h>
using namespace std;
 
void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
 
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}


// Approach: 

//     Make a visited array of type boolean.
//     Use the first loop to point to an element of the array.
//     Initialize the variable count to 1.
//     Make that index true in the visited array.
//     Run second loop, if we find the element then mark the visited index true and increase the count.
//     If the visited index is already true then skip the other steps.