Problem Statement-
Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, 
sort them in decreasing order.

Return the sorted array.

Example 1:
Input: nums = [1,1,2,2,2,3]

Output: [3,1,1,2,2,2]

Explanation:
> '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

Example 2:
Input: nums = [2,3,1,3,2]

Output: [1,3,3,2,2]

Explanation:
> '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.

Example 3:
Input: nums = [-1,1,-6,4,5,-6,1,4,1]

Output: [5,-1,4,4,-6,-6,1,1,1]

Constraints:
-> 1 <= nums.length <= 100
-> -100 <= nums[i] <= 100
  
Related Topics-
> Array
> Hash Table
> Sorting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool static c(pair<int,int>p1,pair<int,int>p2)
    {
        if(p1.second==p2.second)
            return (p1.first>p2.first);
        
        return (p1.second<p2.second);
    }
     
    vector<int> frequencySort(vector<int>& n) {
        map<int,int>mp;
        vector<pair<int,int>>p;
        for(int i=0;i<n.size();i++)
        {
            mp[n[i]]++;
        }
        for(auto itr:mp)
        {
            p.push_back(itr);
        }
        sort(p.begin(),p.end(),c);
        n.clear();
        for(int i=0;i<p.size();i++)
        {
            int k=p[i].first;
            while(p[i].second)
            {
                n.push_back(k);
                p[i].second--;
            }
        }
   return n; }
};

