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
-> 1 <= n <= 5 * 10^4
-> -109 <= nums[i] <= 10^9

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
    int majorityElement(vector<int>& n) {
        map<int,int>mp;
        int mx=INT_MIN,y;
        for(int i=0;i<n.size();i++)
            mp[n[i]]++;
     
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second>mx)
            {
                mx=itr->second;
                y=itr->first;
            }
        }
  return y;  }
};

