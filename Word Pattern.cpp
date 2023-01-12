Problem Statement-
Given a pattern and a string s, find if s follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

Example 1:
Input: pattern = "abba", s = "dog cat cat dog"

Output: true

Example 2:
Input: pattern = "abba", s = "dog cat cat fish"

Output: false

Example 3:
Input: pattern = "aaaa", s = "dog cat cat dog"

Output: false
 
Constraints:
-> 1 <= pattern.length <= 300
-> pattern contains only lower-case English letters.
-> 1 <= s.length <= 3000
-> s contains only lowercase English letters and spaces ' '.
-> s does not contain any leading or trailing spaces.
-> All the words in s are separated by a single space.
  
Related Topics-
> String 
> Hash Table
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool wordPattern(string p, string s) {
        s+=" ";
        map<char,string> mp;
        map<string,char> pm;
        vector<string> v;
        string d="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
               v.push_back(d);
               d="";
            }
            else
            d+=s[i];
        }
        if(v.size()!=p.size())
        return false;
        for(int i=0;i<p.size();i++)
        {
            if(mp[p[i]]=="")
            {
                mp[p[i]]=v[i];
            }
            else
            {
                if(mp[p[i]]!=v[i])
                 return false;
            }
            if(pm[v[i]]=='\0')
            pm[v[i]]=p[i];
            else
            {
                if(pm[v[i]]!=p[i])
                return false;
            }
        }
   return true; }
};

