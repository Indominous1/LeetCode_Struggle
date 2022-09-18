Problem Statement-
Given a string s, return true if s is a good string, or false otherwise.
A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

Example 1:
Input: s = "abacbc"

Output: true

Explanation:
> The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.

Example 2:
Input: s = "aaabb"

Output: false

Explanation: 
> The characters that appear in s are 'a' and 'b'.
> 'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.
 
Constraints:
> 1 <= s.length <= 1000
> s consists of lowercase English letters.
  
Related Topics-
> Hash Table
> String
> Counting

   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int flag=1;
        int d=mp[s[0]];
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            flag=1;
            if(itr->second!=d)
            {
               flag=0;
                break;
            }
        }
        if(flag==1)
            return true;
        else
            return false;
    }
};

