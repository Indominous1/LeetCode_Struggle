Problem Statement-
Given an array of strings strs, group the anagrams together. You can return the answer in any order.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Example 2:
Input: strs = [""]

Output: [[""]]

Example 3:
Input: strs = ["a"]

Output: [["a"]]
 
Constraints:
-> 1 <= strs.length <= 104
-> 0 <= strs[i].length <= 100
-> strs[i] consists of lowercase English letters.
  
Related Topics-
> Array
> Hash Table
> String
> Sorting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> v;
        for(int i=0;i<strs.size();i++)
        {
            string g=strs[i];
            sort(g.begin(),g.end());
            mp[g].push_back(strs[i]);
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++)
            v.push_back(itr->second);
     return v;  
    }
};
