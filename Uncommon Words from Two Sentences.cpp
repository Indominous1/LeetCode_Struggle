Problem Statement-
A sentence is a string of single-space separated words where each word consists only of lowercase letters.
A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.

Example 1:
Input: s1 = "this apple is sweet", s2 = "this apple is sour"

Output: ["sweet","sour"]

Example 2:
Input: s1 = "apple apple", s2 = "banana"

Output: ["banana"] 

Constraints:
-> 1 <= s1.length, s2.length <= 200
-> s1 and s2 consist of lowercase English letters and spaces.
-> s1 and s2 do not have leading or trailing spaces.
-> All the words in s1 and s2 are separated by a single space.
  
Related Topics-
> Hash Table
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v;
        string d="";
        
        map<string,int> mp1;
        map<string,int> mp2;
        
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=' ')
            {
                d+=s1[i];
            }
            else
            {
                mp1[d]++;
                d="";
            }
        }
        mp1[d]++;
        d="";
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]!=' ')
            {
                d+=s2[i];
            }
            else
            {
                mp2[d]++;
                d="";
            }
        }
        mp2[d]++;
        
        for(auto itr=mp1.begin();itr!=mp1.end();itr++)
        {
            if(mp1[itr->first]==1 && mp2[itr->first]==0)
            {
                v.push_back(itr->first);
            }
        }
        for(auto itr=mp2.begin();itr!=mp2.end();itr++)
        {
            if(mp2[itr->first]==1 && mp1[itr->first]==0)
            {
                v.push_back(itr->first);
            }
        }
   return v; }
};

