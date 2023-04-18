Problem Statement-
You are given a 2D integer array logs where each logs[i] = [birthi, deathi] indicates the birth and death years of the ith person.

The population of some year x is the number of people alive during that year. The ith person is counted in year x population if x is in the inclusive range
[birthi, deathi - 1]. Note that the person is not counted in the year that they die.

Return the earliest year with the maximum population.
 
Example 1:
Input: logs = [[1993,1999],[2000,2010]]

Output: 1993

Explanation:
- The maximum population is 1, and 1993 is the earliest year with this population.

Example 2:
Input: logs = [[1950,1961],[1960,1971],[1970,1981]]

Output: 1960

Explanation: 
- The maximum population is 2, and it had happened in years 1960 and 1970.
- The earlier year between them is 1960.
 
Constraints:
-> 1 <= logs.length <= 100
-> 1950 <= birthi < deathi <= 2050
  
Related Topics-
> Array
> Counting
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& l) {
        map<int,int> mp;
        multimap<int,int>mx;
        for(int i=0;i<l.size();i++)
        {
            for(int j=l[i][0];j<l[i][1];j++)
            mp[j]++;
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++)
            mx.insert({itr->second,itr->first});
        int m=0,miy=2100;
        for(auto itr=mx.rbegin();itr!=mx.rend();itr++)
        {
            if(itr->first>=m)
            {
                miy=min(miy,itr->second);
                m=max(m,itr->first);
            }
            if(itr->first<m)
            break;
        }
        return miy;
    }
};

