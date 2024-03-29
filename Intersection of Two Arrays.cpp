Problem Statement-
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]

Output: [2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]

Output: [9,4]

Explanation: [4,9] is also accepted.

Constraints:
-> 1 <= nums1.length, nums2.length <= 1000
-> 0 <= nums1[i], nums2[i] <= 1000
  
Related Topics-
> Array
> Hash Table
> Two Pointers
> Binary Search
> Sorting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        set<int>s;
        vector<int>v;
        for(int i=0;i<n1.size();i++)
        {
            vector<int>::iterator itr;
            itr=find(n2.begin(),n2.end(),n1[i]);
            if(itr != n2.end())
            {
                s.insert(n1[i]);
            }
        }
        for(auto itr:s)
        {
            v.push_back(itr);
        }
   return v; }
};

