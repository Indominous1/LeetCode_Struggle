Problem Statement-
Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.

Example 1:
Input: arr = [1,2,2,6,6,6,6,7,10]

Output: 6

Example 2:
Input: arr = [1,1]

Output: 1
 
Constraints:
-> 1 <= arr.length <= 10^4
-> 0 <= arr[i] <= 10^5
  
Related Topics-
> Array
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>mp;
        int s,c=0;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second>c)
            {
               s=itr->first; 
               c=itr->second;
            }
        }
   return s; }
};

