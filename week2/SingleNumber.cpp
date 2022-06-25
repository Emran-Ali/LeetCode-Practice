// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// Example 1:

// Input: nums = [2,2,1]
// Output: 1

// Example 2:

// Input: nums = [4,1,2,1,2]
// Output: 4


// solution
// sort array to place same element togather
// then find the distict one;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s=nums.size()-1;
        sort(nums.begin(), nums.end());
        for (int i=0; i<s; i=i+2)
        {
            if(nums[i]!=nums[i+1])
                return nums[i];
        }
        return nums[s];
    }
};

time complexity: O(n log n) bcz sort;
space complexity: O(1);