Problem Statement-
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
Return any array that satisfies this condition.

Example 1:
Input: nums = [3,1,2,4]

Output: [2,4,3,1]

Explanation: 
> The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

Example 2:
Input: nums = [0]

Output: [0] 

Constraints:
-> 1 <= nums.length <= 5000
-> 0 <= nums[i] <= 5000
  
Related Topics-
> Array
> Two Pointers
> Sorting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
       vector<int> e,o; 
        for(int i=0;i<n.size();i++)
        {
            if(n[i]%2==0)
                e.push_back(n[i]);
            else
                o.push_back(n[i]);
        }
        e.insert(e.end(),o.begin(),o.end());
   return e; }
};

