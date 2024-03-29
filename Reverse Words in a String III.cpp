Problem Statement-
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: s = "Let's take LeetCode contest"

Output: "s'teL ekat edoCteeL tsetnoc"

Example 2:
Input: s = "God Ding"

Output: "doG gniD" 
  
Constraints:
-> 1 <= s.length <= 5 * 104
-> s contains printable ASCII characters.
-> s does not contain any leading or trailing spaces.
-> There is at least one word in s.
All the words in s are separated by a single space.
  
Related Topics-
> Two Pointers
> String

   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string reverseWords(string s) {
        string d="";
        string e="";
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            e+=s[i];
            if(s[i]==' ')
            {
                e.pop_back();
                reverse(e.begin(),e.end());
                d+=e+' ';
                e="";
            }
        }
        for(int i=s.size()-1;i>=0;i--)           //for last word of string
        {
            if(s[i]==' ')
            {
                break;
            }
            d+=s[i];
        }
   return d; }
};

