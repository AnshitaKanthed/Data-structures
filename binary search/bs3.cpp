// Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.

// The upper bound algorithm finds the first or the smallest index in a sorted array where the value 
// at that index is greater than the given key i.e. x.

// The upper bound is the smallest index, ind, where arr[ind] > x.

// But if any such index is not found, the upper bound algorithm returns n i.e. size of the given 
// array. The main difference between the lower and upper bound is in the condition. For the 
// lower bound the condition was arr[ind] >= x and here, in the case of the upper bound, 
// it is arr[ind] > x.


#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            // upper bound found:
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, x, n);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}

