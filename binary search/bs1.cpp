// You are given a sorted array of integers and a target, your task is to search for the target in the 
// given array. Assume the given array does not contain any duplicate numbers.

#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>& nums, int target, int n){
    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(target>nums[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int n = 8;
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binarysearch(a,target,n);
    cout << "target index " << ind << endl;
    return 0;
}