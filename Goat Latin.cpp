Problem Statement-
You are given a string sentence that consist of words separated by spaces. Each word consists of lowercase and uppercase letters only.

We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.) The rules of Goat Latin are as follows:
 - If a word begins with a vowel ('a', 'e', 'i', 'o', or 'u'), append "ma" to the end of the word.
   For example, the word "apple" becomes "applema".

 - If a word begins with a consonant (i.e., not a vowel), remove the first letter and append it to the end, then add "ma".
   For example, the word "goat" becomes "oatgma".

 - Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
   For example, the first word gets "a" added to the end, the second word gets "aa" added to the end, and so on.

Return the final sentence representing the conversion from sentence to Goat Latin. 

Example 1:
 Input: 
 - sentence = "I speak Goat Latin"
 Output: 
 - "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"

Example 2:
 Input: 
 - sentence = "The quick brown fox jumped over the lazy dog"
 Output: 
 - "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"
 
Constraints:
-> 1 <= sentence.length <= 150
-> sentence consists of English letters and spaces.
-> sentence has no leading or trailing spaces.
-> All the words in sentence are separated by a single space.
  
Related Topics-
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string toGoatLatin(string s) {
        string a="aeiouAEIOU";
        vector<string> v;
        string d="";
        string ans="";
        
        for (auto x : s)
           {
            if (x == ' ')
              {
              v.push_back(d);
              d = "";
               }
             else {
              d = d + x;
             }
           }
          v.push_back(d);
        
        for(int i=0;i<v.size();i++)
        {
            d="";
            string q=v[i];
            
            if(a.find(q[0])!=string::npos)         //vowel
            {
                d=d+q+"ma";
            
               for(int j=0;j<=i;j++)
               {
                d+='a';
                }
               ans=ans+d+' ';
            }
            else
            {
                for(int j=1;j<q.size();j++)
                {
                    d+=q[j];
                }
                d=d+q[0]+"ma";
                for(int j=0;j<=i;j++)
                {
                    d+='a';
                }
                ans=ans+d+' ';
            }
        }
        ans=ans.substr(0,ans.size()-1);
  return ans;  }
};
