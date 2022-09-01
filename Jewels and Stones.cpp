Problem Statement-
You are given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. 
Each character in stones is a type of stone you have. 
You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: jewels = "aA", stones = "aAAbbbb"

Output: 3

Example 2:
Input: jewels = "z", stones = "ZZ"

Output: 0
 
Constraints:
-> 1 <= jewels.length, stones.length <= 50
-> jewels and stones consist of only English letters.
-> All the characters of jewels are unique.
  
Related Topics-
> Hash Table
> String

  -------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int cnt=0;
        for(int i=0;i<j.size();i++)
        {
            for(int k=0;k<s.size();k++)
            {
                if(s[k]==j[i])
                    cnt++;
            }
        }
        return cnt;
    }
};
