Problem Statement-
Given an binary array nums and an integer k, return true if all 1's are at least k places away from each other, otherwise return false.

Example 1:
Input: nums = [1,0,0,0,1,0,0,1], k = 2

Output: true

Explanation:
- Each of the 1s are at least 2 places away from each other.

Example 2:
Input: nums = [1,0,0,1,0,1], k = 2
  
Output: false

Explanation:The second 1 and third 1 are only one apart from each other.
 
Constraints:
-> 1 <= nums.length <= 105
-> 0 <= k <= nums.length
-> nums[i] is 0 or 1
  
Related Topics-
> Array
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool kLengthApart(vector<int>& n, int k) {
        int prev=0;
        while(prev<n.size())
        {
            if(n[prev]==1)
            break;
            prev++;
        }
        if(prev>n.size())
        return false;
        for(int i=prev+1;i<n.size();i++)
        {
            if(n[i]==1)
            {
                if(i-prev-1 < k)
                return false;
                prev=i;
            }
        }
        return true;
    }
};

