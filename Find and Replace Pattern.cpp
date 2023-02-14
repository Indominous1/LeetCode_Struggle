nProblem Statement-
Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.
A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.

Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

Example 1:
Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"

Output: ["mee","aqq"]

Explanation:
> "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
> "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.

Example 2:
Input: words = ["a","b","c"], pattern = "a"

Output: ["a","b","c"]
 
Constraints:
-> 1 <= pattern.length <= 20
-> 1 <= words.length <= 50
-> words[i].length == pattern.length
-> pattern and words[i] are lowercase English letters.
  
Related Topics-
> Array
> Hash Table
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        vector<string> v;
        for(int i=0;i<w.size();i++)
        {
            map<char,char> mp1,mp2;
            int flag=1;
            string s=w[i];
            for(int j=0;j<s.size();j++)
            {
                if(mp1.find(s[j])!=mp1.end() || mp2.find(p[j])!=mp2.end())
                {
                    if(mp1[s[j]]!=p[j] || mp2[p[j]]!=s[j])
                    {
                        flag=0;
                        break;
                    }
                }
                else
                {
                    mp1[s[j]]=p[j];
                    mp2[p[j]]=s[j];
                }
            }
            if(flag==1)
                v.push_back(s);
        }
   return v; }
};

