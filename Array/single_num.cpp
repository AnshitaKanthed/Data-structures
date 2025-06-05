// Given a non-empty array of integers nums, every element appears twice except for one. 
// Find that single one.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++) {
            res ^= nums[i];
        }
        return res;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {2, 3, 5, 4, 5, 3, 2};
    
    int unique = sol.singleNumber(nums);
    cout << "The single number is: " << unique << endl;
    
    return 0;
}
