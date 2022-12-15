Problem Statement-
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]

Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]

Output: 2
 
Constraints:
-> n == nums.length
-> 1 <= n <= 5 * 104
-> -109 <= nums[i] <= 109

Related Topics-
> Array
> Hash Table
> Divide and Conquer
> Sorting
> Counting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        int l=-1;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->first==itr->second && l<itr->first)
            {
                l=itr->first;
            }
        }
   return l; }
};

