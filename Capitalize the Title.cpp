Problem Statement-
You are given a string title consisting of one or more words separated by a single space, where each word consists of English letters. Capitalize the string by changing the 
capitalization of each word such that:

If the length of the word is 1 or 2 letters, change all letters to lowercase.
Otherwise, change the first letter to uppercase and the remaining letters to lowercase.

Return the capitalized title.

Example 1:
Input: title = "capiTalIze tHe titLe"

Output: "Capitalize The Title"

Explanation:
- Since all the words have a length of at least 3, the first letter of each word is uppercase, and the remaining letters are lowercase.

Example 2:
Input: title = "First leTTeR of EACH Word"

Output: "First Letter of Each Word"

Explanation:
- The word "of" has length 2, so it is all lowercase.
- The remaining words have a length of at least 3, so the first letter of each remaining word is uppercase, and the remaining letters are lowercase.

Example 3:
Input: title = "i lOve leetcode"

Output: "i Love Leetcode"

Explanation:
- The word "i" has length 1, so it is lowercase.
- The remaining words have a length of at least 3, so the first letter of each remaining word is uppercase, and the remaining letters are lowercase.
 
Constraints:
-> 1 <= title.length <= 100
-> title consists of words separated by a single space without any leading or trailing spaces.
-> Each word consists of uppercase and lowercase English letters and is non-empty.
  
Related Topics-
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string capitalizeTitle(string s) {
       vector<string>v;
        string ans="";
       for(int i=0;i<s.size();i++)
       {
           if(s[i]!=' ')
            ans+=s[i];
           else
            {
            v.push_back(ans);
            ans="";
            }
       }
       v.push_back(ans);
       ans="";
       for(int i=0;i<v.size();i++)
       {
           string d=v[i];
           if(d.size()<=2)
           {
               string c="";
               for(int j=0;j<d.size();j++)
               {
                c+=tolower(d[j]);
               }
               ans=ans+c+" ";
           }
           else
           {
               char c=toupper(d[0]);
               string u="";
               u+=c;
               for(int j=1;j<d.size();j++)
               {
                   u+=tolower(d[j]);
               }
                ans=ans+u+" ";
           }
       }
       ans=ans.substr(0,ans.size()-1);
    return ans;}
};

