Problem Statement-
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9

Output: [0,1]

Explanation:
- Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6

Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6

Output: [0,1]
 
Constraints:
-> 2 <= nums.length <= 10^4
-> -10^9 <= nums[i] <= 10^9
-> -10^9 <= target <= 10^9
-> Only one valid answer exists.
  
Related Topics-
- Array
- Hash Table
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> bin(vector<int>& x, int t)
    {
       int i=0,j=x.size()-1;
       while(i<j)
        {
            if(x[i]+x[j]==t)
             break;
            else if(x[i]+x[j]>t)
             j--;
            else
             i++;
        }
        vector<int> ans={x[i],x[j]};
        return ans;
    }
    vector<int> twoSum(vector<int>& x, int t) {
        
        vector <int> n=x,z;
        sort(x.begin(),x.end());
        z=bin(x,t);
        for(int j=0;j<z.size();j++)
        {
            for(int i=0;i<n.size();i++)
            {
                if(z[j]==n[i])
                {
                   z[j]=i;
                   n[i]=INT_MAX;
                   break;
                }
            }
        }
    return z;
    }
};

