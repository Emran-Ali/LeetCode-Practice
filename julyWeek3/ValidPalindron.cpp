// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

// solution:  visite string together with 1st and last;
// and check if it match and ditgit or num;

lass Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        
        int i=0, j=n-1;
        bool rslt=true;
        char a,b;
        
        while(i<j){
            a=tolower(s[i]);
            b=tolower(s[j]);
            // cout<<a<<"\t"<<b<<endl;
            if(!isalnum(a))
                i++;
            else if(!isalnum(b))
                j--;
            else if(a==b)
            {
                // cout<<tolower(s[i])<<"\t"<<tolower(s[j])<<endl;
                i++;
                j--;
                
            }
            else
                return false;
            
        }
        return rslt;
        
        
    }
};

Time Coplexity: O(n);
Space Complexity: O(1);