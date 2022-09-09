// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true

// solution: sort both string; and match;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),nn=t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            return true;
        return false;
        
    }
};

time coplexity:O(n);
space Coplexity:O(1);