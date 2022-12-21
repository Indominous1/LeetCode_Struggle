Problem Statement-
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]

Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]

Output: [0]
 
Constraints:
-> 1 <= nums.length <= 10^4
-> -2^31 <= nums[i] <= 2^31 - 1
  
Related Topics-
> Array
> Two Pointers
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    void moveZeroes(vector<int>& n) {
        vector<int>v;
        int c=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]==0)
                c++;
            else
            {
                v.push_back(n[i]);
            }
        }
        while(c)
        {
            v.push_back(0);
            c--;
        }
        for(int i=0;i<n.size();i++)
            n[i]=v[i];
    }
};

