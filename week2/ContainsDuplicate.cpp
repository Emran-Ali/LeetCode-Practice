// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


// Example 1:

// Input: nums = [1,2,3,1]
// Output: true

// Example 2:

// Input: nums = [1,2,3,4]
// Output: false

// solution 
// insert element in set.
// if size of set and vector equal then contain duplicate 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> s;
        
        for(int i=0; i<nums.size(); i++)
            s.insert(nums[i]);
        
        if(s.size()==nums.size())
            return false;
        return true;
        
    }
};

// time complexity: O(n);
// space complexity: O(n);