Problem Statement-
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:
Input: s = "anagram", t = "nagaram"

Output: true

Example 2:
Input: s = "rat", t = "car"

Output: false 

Constraints:
-> 1 <= s.length, t.length <= 5 * 104
-> s and t consist of lowercase English letters.
 
Follow up: 
- What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
  
Related Topics-
> Hash Table 
> String
> Sorting
 
   -------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        map<char,int> ms,mt;
        
        if(s.size() != t.size())
            return false;
        
        for(int i=0;i<s.size();i++)
        {
            ms[s[i]]++;
            mt[t[i]]++;
        }
        
        for(auto itr=ms.begin();itr!=ms.end();itr++)
        {
            if(ms[itr->first] != mt[itr->first])
            {
                return false;
            }
        }
        
    return true;}
};

