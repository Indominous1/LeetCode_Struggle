Problem Statement-
A substring is a contiguous (non-empty) sequence of characters within a string.
A vowel substring is a substring that only consists of vowels ('a', 'e', 'i', 'o', and 'u') and has all five vowels present in it.

Given a string word, return the number of vowel substrings in word.

Example 1:
Input: word = "aeiouu"

Output: 2

Explanation: The vowel substrings of word are as follows (underlined):
 - "aeiouu"
 - "aeiouu"

Example 2:
Input: word = "unicornarihan"

Output: 0

Explanation: Not all 5 vowels are present, so there are no vowel substrings.

Example 3:
Input: word = "cuaieuouac"

Output: 7

Explanation: The vowel substrings of word are as follows (underlined):
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
 
Constraints:
-> 1 <= word.length <= 100
-> word consists of lowercase English letters only.

Related Topics-
> Hash Table
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int countVowelSubstrings(string s) {
        map<char,int> f={{'a',1},{'e',1},{'i',1},{'o',1},{'u',1}};
        string a="aeiou";
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(a.find(s[i])!=string::npos)
            {
              map<char,int> mp={{'a',0},{'e',0},{'i',0},{'o',0},{'u',0}};
              for(int j=i;j<s.size();j++)
              {
                if(a.find(s[j])!=string::npos)
                {
                    mp[s[j]]++;
                    int flag=1;
                    for(auto itr=f.begin();itr!=f.end();itr++)
                    {
                        if(mp[itr->first]<f[itr->first])
                        {
                            flag=0;
                            break;
                        }
                    }
                    if(flag==1)
                        c++;
                }
                  else
                      break;
              }
              
            }
            
        }
  return c;  }
};

