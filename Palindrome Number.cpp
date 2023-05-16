Problem Statement-
Given an integer x, return true if x is a palindrome, and false otherwise. 

Example 1:
Input: x = 121

Output: true

Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121

Output: false

Explanation:
- From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10

Output: false

Explanation:
- Reads 01 from right to left. Therefore it is not a palindrome.
 
Constraints:
-> -2^31 <= x <= 2^31 - 1
  
Related Topics-
> Math
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<10 && x>=0)
        return true;
        if(x<0)
        return false;

        string d=to_string(x);
        string s=d;
        reverse(d.begin(),d.end());
        if(s==d)
        return true;

        return false;
    }
};

