Problem Statement-
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]

Output: [5,6]

Example 2:
Input: nums = [1,1]

Output: [2]
 
Constraints:
-> n == nums.length
-> 1 <= n <= 105
-> 1 <= nums[i] <= n
  
Related Topics-
> Array
> Hash Table
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& n) {
        map<int,int>mp1;
        for(int i=0;i<n.size();i++)
        {
            mp1[n[i]]++;
        }
        int f=n.size();
        n.clear();
        for(int i=0;i<f;i++)
        {
            if(mp1[i+1]==0)
                n.push_back(i+1);
        }
   return n; }
};

