Problem Statement-
Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

Example 1:
Input: words = ["bella","label","roller"]

Output: ["e","l","l"]

Example 2:
Input: words = ["cool","lock","cook"]

Output: ["c","o"]
 
Constraints:
- 1 <= words.length <= 100
- 1 <= words[i].length <= 100
- words[i] consists of lowercase English letters.
 
Related Topics-
> Array
> Hash Table
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<string> commonChars(vector<string>& d) {
        vector<string> v;
        string s=d[0];
        for(int i=0;i<s.size();i++)
        {
            bool flag=true;
            for(int j=1;j<d.size();j++)
            {
                if(d[j].find(s[i])==string::npos)
                {
                    flag=false;
                    break;
                }
                else
                {
                    int k=d[j].find(s[i]);
                    d[j].erase(d[j].begin()+k);
                }
            }
            if(flag)
            {
                    string a ="";
                    a+=s[i];
                    v.push_back(a);
            }
            
        }
   return v; }
};

