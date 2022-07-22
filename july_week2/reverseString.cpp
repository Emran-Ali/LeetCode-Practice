// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// solution: visit string 1st to lenth/2; and swap it 
// from last;

class Solution {
    public void reverseString(char[] s) {
        int len = s.length - 1;
        for (int i = 0; i <= len / 2; i++) {
            char temp = s[i];
            s[i] = s[len - i];
            s[len - i] = temp;
            
        }
        
    }
}
// Time Coplexity:O(n);
// space Coplexity:O(1);