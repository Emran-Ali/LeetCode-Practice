// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

// Example 1:

// Input: s = "leetcode"
// Output: 0

solution: visit string and count frequecy;
return position which frequency 1;
else return -1;


class Solution {
public:
    int firstUniqChar(string s) {
        int re[26]={};
        
        for (int i=0; i<s.size(); i++)
        {
            re[s[i]-'a']++;
                
        }
        
        for (int i=0; i<s.size(); i++)
        {
           if(re[s[i]-'a']==1) 
                return i;
        }
        return -1;
        
    }
};
Time complexity: O(n);
Space Coplexity: O(n);