Problem Statement-
Given two strings first and second, consider occurrences in some text of the form "first second third", where second comes immediately after first, and third comes 
immediately after second.
  
Return an array of all the words third for each occurrence of "first second third".

Example 1:
Input: text = "alice is a good girl she is a good student", first = "a", second = "good"

Output: ["girl","student"]

Example 2:
Input: text = "we will we will rock you", first = "we", second = "will"

Output: ["we","rock"]
 
Constraints:
-> 1 <= text.length <= 1000
-> text consists of lowercase English letters and spaces.
-> All the words in text a separated by a single space.
->1 <= first.length, second.length <= 10
-> first and second consist of lowercase English letters.
  
Related Topics-
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<string> findOcurrences(string text, string f, string se) {
        vector<string>v,s;
        string d="";
        for(int i=0;i<text.size();i++)
        {
            if(text[i]!=' ')
            {
                d+=text[i];
            }
            else
            {
                s.push_back(d);
                d="";
            }
        }
        s.push_back(d);
        for(int i=0;i<s.size()-2;i++)
        {
            if(s[i]==f && s[i+1]==se)
            {
                v.push_back(s[i+2]);
            }
        }
   return v; }
};

