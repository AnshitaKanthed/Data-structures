// Given an array of integers, rotating array of elements by k elements right.

#include <iostream>
using namespace std;
void Rotatetoright(int arr[], int n, int k)
{
    if (n == 0)
        return;
    k = k % n;
    if (k > n)
        return;
    int temp[k];
    for (int i = n - k; i < n; i++)       
    {
        temp[i - n + k] = arr[i];         // When i = 5: temp[5 - 7 + 2] = temp[0] = arr[5] = 6
                                          // When i = 6: temp[6 - 7 + 2] = temp[1] = arr[6] = 7
    }
    for (int i = n - k - 1; i >= 0; i--)  // Purpose: Shift the first n - k elements of arr to the right by k positions.
    {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++)          // Purpose: Copy the elements from temp back to the beginning of arr.
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    Rotatetoright(arr, n, k);
    cout << "After Rotating the elements to right " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
