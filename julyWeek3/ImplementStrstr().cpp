// Implement strStr().

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Clarification:

// What should we return when needle is an empty string? This is a great question to ask during an interview.

// For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

// solution: match 1st char and then check next match


class Solution {
public:
    int strStr(string haystack, string needle) {
        int j, n=haystack.size(), m=needle.size(), count=1;
        if(m>n)
            return -1;
        for (int i=0; i<n; i++)
        {
            if(haystack[i]==needle[0])
            {
                j=i+1;
                for(int k=1; k<m && j<n; k++)
                {
                    if(haystack[j]==needle[k])
                        count++;
                    else
                        break;
                    j++;
                }
                if(count==m)
                    return i;
                else
                    count=1;
                    
            }
        }
        return -1;
        
    }
};
Time Coplexity: O(n*m);
Space Complexity: O(1);
