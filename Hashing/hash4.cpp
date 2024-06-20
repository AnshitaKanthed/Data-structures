// Given an array of size N. Find the highest and lowest frequency element.

// (Using two loops): 

#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

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
        if (count > maxFreq) {
            maxEle = arr[i];
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = arr[i];
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}



// The steps are as follows:

//     Make a visited array of type boolean.
//     Use the first loop to point to an element of the array.
//     Initialize the variable count to 1.
//     Make that index true in the visited array.
//     Run the second loop, if we find the element then mark the visited index true and increase the count.
//     If the visited index is already true then skip the other steps.
//     After step 5, we will keep a track of the element with the highest frequency and the lowest frequency.