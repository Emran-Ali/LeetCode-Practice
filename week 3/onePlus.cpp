// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Example 1:

// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

/*solution*/
// add one at last degit;
// add carry to preveous;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1; i>=0; i--)
        {
            digits[i]+=carry;
            carry=digits[i]/10;
            digits[i]=digits[i]%10;
            
        }
        if(carry)
            digits.insert(digits.begin(),carry);
        return digits;
    }
};

//time coplexity: O(n)
// space coplexity:O(1)