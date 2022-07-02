// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]


// solution;
// visite all element , if it 0 then swap with next non zero element;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ze=0,j;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                for(j=i+1; j<nums.size(); j++)
                {
                    
                    if(nums[j]!=0)
                    {
                        swap(nums[i],nums[j]);
                        break;
                    }
                    
                }
                
            }
        }
        
    }
};

Time complexity: O(n^2);
space coplexity:O(1);