Problem Statement-
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

Example 1:
Input: arr = [1,2,2,1,1,3]

Output: true

Explanation:
> The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:
Input: arr = [1,2]

Output: false

Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]

Output: true

Constraints:
-> 1 <= arr.length <= 1000
-> -1000 <= arr[i] <= 1000
  
Related Topics-
> Array
> Hash Table
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        bool flag=true;
        vector<int>v;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            v.push_back(itr->second);
        }
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]==v[j])
                {
                    flag=false;
                    break;
                }
            }
        }
   return flag; }
};

