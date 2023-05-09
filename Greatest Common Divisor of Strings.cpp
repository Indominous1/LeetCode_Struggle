Problem Statement-
For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

Example 1:
Input: str1 = "ABCABC", str2 = "ABC"

Output: "ABC"

Example 2:
Input: str1 = "ABABAB", str2 = "ABAB"

Output: "AB"

Example 3:
Input: str1 = "LEET", str2 = "CODE"

Output: "" 

Constraints:
-> 1 <= str1.length, str2.length <= 1000
-> str1 and str2 consist of English uppercase letters.
  
Related Topics-
> Math
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int x=str1.size(),y=str2.size();
        int n=__gcd(x,y);
        map<string,int> mp;
        for(int i=0;i<str1.size();i++)
        {
            string t=str1.substr(i,n);
            mp[t]++;
            i+=(n-1);
        }
        for(int i=0;i<str2.size();i++)
        {
            string t=str2.substr(i,n);
            mp[t]++;
            i+=(n-1);
        }
        if(mp.size()>1)
        return "";

        return mp.begin()->first;
    }
};

