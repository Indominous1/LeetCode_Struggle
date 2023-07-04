Problem Statement-
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]

Output: 3

Explanation:
- The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]

Output: 2

Constraints:
-> 1 <= nums.length <= 105
-> nums[i] is either 0 or 1.
  
Related Topics-
> Array
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& n) {
        int mx=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]==1)
            {
                int cnt=0;
                for(int j=i;j<n.size();j++)
                {
                    if(n[j]==1)
                    cnt++;
                    else
                    {
                        mx=max(mx,cnt);
                        i=j-1;
                        break;
                    }
                }
                mx=max(mx,cnt);
            }
        }
        return mx;
    }
};

