Problem Statement-
You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.
An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.

Return the minimum number of steps to make t an anagram of s.

Example 1:
Input: s = "bab", t = "aba"

Output: 1

Explanation:
> Replace the first 'a' in t with b, t = "bba" which is anagram of s.

Example 2:
Input: s = "leetcode", t = "practice"

Output: 5

Explanation:
> Replace 'p', 'r', 'a', 'i' and 'c' from t with proper characters to make t anagram of s.

Example 3:
Input: s = "anagram", t = "mangaar"

Output: 0

Explanation:
> "anagram" and "mangaar" are anagrams. 
 
Constraints:
-> 1 <= s.length <= 5 * 104
-> s.length == t.length
-> s and t consist of lowercase English letters only.
  
Related Topics-
> Hash Table
> String
> Counting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int minSteps(string s, string t) {
        if(s==t || s.size()!=t.size())
            return 0;
        
        map<char,int> mp1,mp2;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        int ans=0;
        for(auto itr=mp1.begin();itr!=mp1.end();itr++)
        {
            if(mp1[itr->first]>mp2[itr->first])
            {
                ans+=abs(mp1[itr->first]-mp2[itr->first]);
            }
            
        }
    return ans;}
};

