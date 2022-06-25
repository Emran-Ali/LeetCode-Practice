// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]

// solution
// sort two array;
// traverse two array and check equqlity;
// if equql then put value in ans ;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int m=nums1.size(),n=nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> v;
        int i = 0, j = 0;
        while (i < m && j < n) 
        {
             if (nums1[i] > nums2[j]) {
             j++;
            }
        else if (nums2[j] > nums1[i]) {
            i++;
        }
        else {
             
            // common element
            v.push_back(nums1[i]);
            i++;
            j++;
        }
        }
        
        return v;
        
    }
};

//time coplexity: O(m+n)
// space coplexity:O(m+n)