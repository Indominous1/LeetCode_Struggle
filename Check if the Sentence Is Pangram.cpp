Problem Statement-
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"

Output: true

Explanation: sentence contains at least one of every letter of the English alphabet.

Example 2:
Input: sentence = "leetcode"

Output: false

Constraints:
-> 1 <= sentence.length <= 1000
sentence consists of lowercase English letters.
  
Related Topics-
> Hash Table
> String

   -----------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        char a='a';
        int flag=1;
        while(a<='z')
        {
            if(mp[a]==0)
            {
                flag=0;
                break;
            }
            a++;
        }
        if(flag==0)
        {
            return false;
        }
        else
            return true;
    }
};

