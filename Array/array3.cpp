// Check if an Array is Sorted

#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
    return false;
  }

  return true;
}

int main() {
  int arr[] = {7, 2, 5, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << (isSorted(arr, n) ? "True" : "False") << endl;

}

