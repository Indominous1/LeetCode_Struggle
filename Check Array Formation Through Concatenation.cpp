Problem Statement-
You are given an array of distinct integers arr and an array of integer arrays pieces, where the integers in pieces are distinct. 
Your goal is to form arr by concatenating the arrays in pieces in any order. However, you are not allowed to reorder the integers in each array pieces[i].

Return true if it is possible to form the array arr from pieces. Otherwise, return false.

Example 1:
Input: arr = [15,88], pieces = [[88],[15]]

Output: true

Explanation:
- Concatenate [15] then [88]

Example 2:
Input: arr = [49,18,16], pieces = [[16,18,49]]

Output: false

Explanation:
- Even though the numbers match, we cannot reorder pieces[0].

Example 3:
Input: arr = [91,4,64,78], pieces = [[78],[4,64],[91]]

Output: true

Explanation:
- Concatenate [91] then [4,64] then [78]
 
Constraints:
-> 1 <= pieces.length <= arr.length <= 100
-> sum(pieces[i].length) == arr.length
-> 1 <= pieces[i].length <= arr.length
-> 1 <= arr[i], pieces[i][j] <= 100
-> The integers in arr are distinct.
-> The integers in pieces are distinct (i.e., If we flatten pieces in a 1D array, all the integers in this array are distinct).
  
Related Topics-
- Array
- Hash Table
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& p) {
        vector<int> ans;
        map<int,vector<int>> mp;
        for(auto itr:p)
        mp[itr[0]]=itr;

        for(int i=0;i<arr.size();i++)
        {
            if(mp.find(arr[i])!=mp.end())
            ans.insert(ans.end(),mp[arr[i]].begin(),mp[arr[i]].end());
        }
        return ans==arr;
    }
};

