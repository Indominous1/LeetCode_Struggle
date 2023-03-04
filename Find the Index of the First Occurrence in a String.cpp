Problem Statement-
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:
Input: haystack = "sadbutsad", needle = "sad"

Output: 0

Explanation:
- "sad" occurs at index 0 and 6.
- The first occurrence is at index 0, so we return 0.

Example 2:
Input: haystack = "leetcode", needle = "leeto"

Output: -1

Explanation:
- "leeto" did not occur in "leetcode", so we return -1.
 
Constraints:
-> 1 <= haystack.length, needle.length <= 104
-> haystack and needle consist of only lowercase English characters.
  
Related Topics-
> Two Pointers
> String
> String Matching
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int strStr(string h, string ne) {
        if(ne.size()>h.size()  )
         return -1;
        int n=ne.size();
        for(int i=0;i<=h.size()-n;i++)
        {
            if(h[i]==ne[0])
            {
                string s=h.substr(i,n);
                if(s==ne)
                 return i;
            }
        }
   return -1; }
};

