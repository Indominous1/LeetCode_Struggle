Problem Statement-
The power of the string is the maximum length of a non-empty substring that contains only one unique character.
Given a string s, return the power of s.

Example 1:
Input: s = "leetcode"
  
Output: 2
  
Explanation: 
- The substring "ee" is of length 2 with the character 'e' only.

Example 2:
Input: s = "abbcccddddeeeeedcba"

Output: 5

Explanation: 
- The substring "eeeee" is of length 5 with the character 'e' only.

Constraints:
-> 1 <= s.length <= 500
-> s consists of only lowercase English letters.
  
Related Topics-
> String
  
   -------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int maxPower(string s) {
        string d="";
        int mx=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
           int j=i+1;
           while(s[i]==s[j])
           {
               d=d+s[i];
               j++;
           }
           int n=d.size();
           mx=max(n,mx);
           d="";
        }
         
       return mx+1; }
};

