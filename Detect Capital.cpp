Problem Statement-
We define the usage of capitals in a word to be right when one of the following cases holds:
- All letters in this word are capitals, like "USA".
- All letters in this word are not capitals, like "leetcode".
- Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.
  
Example 1:
Input: word = "USA"

Output: true

Example 2:
Input: word = "FlaG"

Output: false 

Constraints:
-> 1 <= word.length <= 100
-> word consists of lowercase and uppercase English letters.
  
Related Topics-
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool detectCapitalUse(string s) {
        bool flag=true;
        if(s[0]>='A' && s[0]<='Z')
        {
            if(s[1]>='A' && s[1]<='Z')
            {
                for(int i=2;i<s.size();i++)
                {
                    if(s[i]>='a' && s[i]<='z')
                    {
                        flag=false;
                        break;
                    }
                }
            }
            
            else
            {
              for(int i=2;i<s.size();i++)
                {
                    if(s[i]>='A' && s[i]<='Z')
                    {
                        flag=false;
                        break;
                    }
                }   
            }
        }
        else
        {
            for(int i=1;i<s.size();i++)
            {
                    if(s[i]>='A' && s[i]<='Z')
                    {
                        flag=false;
                        break;
                    }
            }
        }
   return flag; }
};

