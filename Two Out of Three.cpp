Problem Statement-
Given three integer arrays nums1, nums2, and nums3, return a distinct array containing all the values that are present in at least two out of the three arrays.
  You may return the values in any order.
 
Example 1:
Input: nums1 = [1,1,3,2], nums2 = [2,3], nums3 = [3]

Output: [3,2]

Explanation: The values that are present in at least two arrays are:
- 3, in all three arrays.
- 2, in nums1 and nums2.

Example 2:
Input: nums1 = [3,1], nums2 = [2,3], nums3 = [1,2]

Output: [2,3,1]

Explanation: The values that are present in at least two arrays are:
- 2, in nums2 and nums3.
- 3, in nums1 and nums2.
- 1, in nums1 and nums3.

Example 3:
Input: nums1 = [1,2,2], nums2 = [4,3,3], nums3 = [5]

Output: []

Explanation: No value is present in at least two arrays.

Constraints:
-> 1 <= nums1.length, nums2.length, nums3.length <= 100
-> 1 <= nums1[i], nums2[j], nums3[k] <= 100
  
Related Topics-
> Array
> Hash Table
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& n1, vector<int>& n2, vector<int>& n3) {
        set<int>s;
        vector<int>v;
        for(int i=0;i<n1.size();i++)
        {
            vector<int>::iterator it1;
            vector<int>::iterator it2;
            it1 = find (n2.begin(), n2.end(), n1[i]);
            it2 = find (n3.begin(), n3.end(), n1[i]);
            
            if(it1 != n2.end() || it2 != n3.end())
                s.insert(n1[i]);
        }
        for(int i=0;i<n2.size();i++)
        {
            vector<int>::iterator it1;
            vector<int>::iterator it2;
            it1 = find (n1.begin(), n1.end(), n2[i]);
            it2 = find (n3.begin(), n3.end(), n2[i]);
            
            if(it1 != n1.end() || it2 != n3.end())
                s.insert(n2[i]);
        }
        for(int i=0;i<n3.size();i++)
        {
            vector<int>::iterator it1;
            vector<int>::iterator it2;
            it1 = find (n2.begin(), n2.end(), n3[i]);
            it2 = find (n1.begin(), n1.end(), n3[i]);
            
            if(it1 != n2.end() || it2 != n1.end())
                s.insert(n3[i]);
        }
        for(auto itr:s)
        {
            v.push_back(itr);
        }
   return v; }
};

