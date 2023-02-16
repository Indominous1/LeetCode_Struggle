Problem Statement-
Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

Example 1:
Input: s = "aab"

Output: [["a","a","b"],["aa","b"]]

Example 2:
Input: s = "a"

Output: [["a"]]
 
Constraints:
-> 1 <= s.length <= 16
-> s contains only lowercase English letters.
  
Related Topics-
> String
> Dynamic Programming
> Backtracking
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> candidates;
        backtrack(s, ans, candidates, 0);
        return ans;
    }
    
     void backtrack(string s, vector<vector<string>>& ans, vector<string>& candidates, int start) {
        if (start == s.size()) {
            ans.push_back(candidates);
            return;
        }
        for (int i = start; i < s.size(); i++) {
            string candidate = s.substr(start, i - start + 1);
            if(!is_palindrome(candidate)) continue;
            candidates.push_back(candidate);
            backtrack(s, ans, candidates, i + 1);
            candidates.pop_back();
        }
    }
    bool is_palindrome(string s) {
        return equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
    }
};

