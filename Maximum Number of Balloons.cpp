Problem Statement-
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
You can use each character in text at most once. Return the maximum number of instances that can be formed.

Example 1:
Input: text = "nlaebolko"

Output: 1

Example 2:
Input: text = "loonbalxballpoon"

Output: 2

Example 3:
Input: text = "leetcode"

Output: 0
 
Constraints:
-> 1 <= text.length <= 104
-> text consists of lower case English letters only.
  
Related Topics-
> Hash Table
> String
> Counting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int maxNumberOfBalloons(string s) {
        map<char,int>mp={{'b',0},{'a',0},{'l',0},{'o',0},{'n',0}};
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b' || s[i]=='a' || s[i]=='l' || s[i]=='o' || s[i]=='n')
            {
                mp[s[i]]++;
            }
        }
        mp['l']/=2;
        mp['o']/=2;
        int mi=INT_MAX;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            mi=min(itr->second,mi);
        }
   return mi; }
};

