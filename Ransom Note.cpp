Problem Statement-
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.

Example 1:
Input: ransomNote = "a", magazine = "b"

Output: false

Example 2:
Input: ransomNote = "aa", magazine = "ab"

Output: false

Example 3:
Input: ransomNote = "aa", magazine = "aab"

Output: true
 
Constraints:
-> 1 <= ransomNote.length, magazine.length <= 105
-> ransomNote and magazine consist of lowercase English letters.
  
Related Topics-
> Hash Table
> String
> Counting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool canConstruct(string r, string s) {
        map<char,int> mp1,mp2;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0;i<r.size();i++)
        {
            mp2[r[i]]++;
        }
        bool flag=true;
        for(auto itr=mp2.begin();itr!=mp2.end();itr++)
        {
            if(mp1[itr->first]<mp2[itr->first])
            {
                flag=false;
            }
        }
   return flag; }
};

