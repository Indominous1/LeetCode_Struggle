Problem Statement-
The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

For example, the beauty of "abaacc" is 3 - 1 = 2.
Given a string s, return the sum of beauty of all of its substrings.

Example 1:
Input: s = "aabcb"

Output: 5

Explanation:
> The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.

Example 2:
Input: s = "aabcbaa"

Output: 17

Constraints:
-> 1 <= s.length <= 500
-> s consists of only lowercase English letters.

Related Topics-
> Hash Table
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for(int i=0; i<s.size(); i++) {
            unordered_map<char, int> m;
            for(int j=i; j<s.size(); j++) {
                m[s[j]]++;
                int mn = INT_MAX, mx = INT_MIN;
                for(auto i : m) mn = min(mn, i.second), mx = max(mx, i.second);
                ans += mx - mn;
            }
        }
        return ans;
    }
};

