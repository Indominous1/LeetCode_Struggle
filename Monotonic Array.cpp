Problem Statement-
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example 1:
Input: nums = [1,2,2,3]

Output: true

Example 2:
Input: nums = [6,5,4,4]

Output: true

Example 3:
Input: nums = [1,3,2]

Output: false
 
Constraints:
-> 1 <= nums.length <= 10^5
-> -10^5 <= nums[i] <= 10^5
  
Related Topics-
> Array
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool isMonotonic(vector<int>& n) {
        bool flag;
        for(int i=0;i<n.size()-1;i++)
        {
            if(n[i]<n[i+1])
            {
                flag=true;
                break;
            }
            else if(n[i]>n[i+1])
            {
                flag=false;
                break;
            }
        }
        bool f=true;
        for(int i=1;i<n.size();i++)
        {
            if(flag==false && n[i-1]<n[i])
            {
                f=false;
                break;
            }
            if(flag==true && n[i-1]>n[i])
            {
                f=false;
                break;
            }
        }
        return f;
    }
};

