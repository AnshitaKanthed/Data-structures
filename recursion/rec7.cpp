// You are given an array. The task is to reverse the array and print it. 
#include <iostream>
using namespace std;
void printarray(int ans[], int n){
    cout << "The reversed array is" << endl;
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
}

void reverseA(int arr[], int n){
    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
    }
   printArray(ans, n);
}

int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}
