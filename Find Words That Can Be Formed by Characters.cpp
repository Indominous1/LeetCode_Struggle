Problem Statement-
You are given an array of strings words and a string chars.
A string is good if it can be formed by characters from chars (each character can only be used once).

Return the sum of lengths of all good strings in words.

Example 1:
Input: 
  words = ["cat","bt","hat","tree"], chars = "atach"

Output: 6
  
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

Example 2:
Input: 
  words = ["hello","world","leetcode"], chars = "welldonehoneyr"

Output: 10
  
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
 
Constraints:
-> 1 <= words.length <= 1000
-> 1 <= words[i].length, chars.length <= 100
-> words[i] and chars consist of lowercase English letters.
  
Related Topics-
> Array
> Hash Table 
> String

   -------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-  
class Solution {
public:
    int countCharacters(vector<string>& s, string chars) {
        map<char,int> mp;               //for chars
        for(int i=0; i<chars.size();i++)
        {
            mp[chars[i]]++;
        }
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            int flag=1;
            map<char,int> w;            //for every word
            string d=s[i];
            for(int j=0;j<d.size();j++)
            {
                w[d[j]]++;
                
                if(w[d[j]]>mp[d[j]])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)   
            {
                c+=d.size();
            }
        }
   return c; }
};

