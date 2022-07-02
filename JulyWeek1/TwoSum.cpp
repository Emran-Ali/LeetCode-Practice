// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// solution
// for every element check the sum of terget;
// else save the value with index in map;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map <int , int > mp;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[target-nums[i]])
                return  {mp[target-nums[i]]-1, i};
            else
                mp[nums[i]]=i+1;
        }
        return {};
    }
};

Time complexity: O(n);
space coplexity:O(n);