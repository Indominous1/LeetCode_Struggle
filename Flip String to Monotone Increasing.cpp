Problem Statement-
A binary string is monotone increasing if it consists of some number of 0's (possibly none), followed by some number of 1's (also possibly none).
You are given a binary string s. You can flip s[i] changing it from 0 to 1 or from 1 to 0.

Return the minimum number of flips to make s monotone increasing.

Example 1:
Input: s = "00110"

Output: 1

Explanation:
> We flip the last digit to get 00111.

Example 2:
Input: s = "010110"

Output: 2

Explanation: 
> We flip to get 011111, or alternatively 000111.

Example 3:
Input: s = "00011000"

Output: 2

Explanation: 
> We flip to get 00000000.
 
Constraints:
-> 1 <= s.length <= 105
-> s[i] is either '0' or '1'.
  
Related Topics-
> String
> Dynamic Programming
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int minFlipsMonoIncr(string S)
    {
        int count_flip = 0, count_one = 0;
        for (auto i : S)
        { 
 //keep track of all one (we will use count_one in else condition if we need)  
//if we want flip one into 0
            if (i == '1')
                count_one++;
            else{
                count_flip++;
            count_flip = min(count_flip, count_one);
            }
        }
        return count_flip;
    }
};

