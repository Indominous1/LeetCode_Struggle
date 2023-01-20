Problem Statement-
Given an integer array nums, return all the different possible non-decreasing subsequences of the given array with at least two elements. You may return the answer in any 
order.

Example 1:
Input: nums = [4,6,7,7]

Output: [[4,6],[4,6,7],[4,6,7,7],[4,7],[4,7,7],[6,7],[6,7,7],[7,7]]

Example 2:
Input: nums = [4,4,3,2,1]

Output: [[4,4]]

Constraints:
-> 1 <= nums.length <= 15
-> -100 <= nums[i] <= 100
  
Related Topics-
> Array
> Hash Table
> Bit Manipulation
> Backtracking
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution:
    def findSubsequences(self, nums: List[int]) -> List[List[int]]:
        curr = [[nums[0]]]
        for x in nums[1:]:
            curr += [y+[x] for y in curr if x>=y[-1]]
            curr += [[x]]
        curr = [tuple(x) for x in curr if len(x)>=2]
        return list(set(curr))  
