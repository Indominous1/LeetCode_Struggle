Problem Statement-
Given an integer n, return any array containing n unique integers such that they add up to 0.

Example 1:
Input: n = 5

Output: [-7,-1,1,3,4]

Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].

Example 2:
Input: n = 3

Output: [-1,0,1]

Example 3:
Input: n = 1

Output: [0] 

Constraints:
-> 1 <= n <= 1000
  
Related Topics-
> Array
> Math
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        if(n%2==0)
        {
            int i=1;
            for(int j=0;j<n/2;j++)
            {
                v.push_back(i);
                v.push_back((i*-1));
                i++;
            }
        }
        else
        {
            v.push_back(0);
            int i=1;
            for(int j=0;j<(n-1)/2;j++)
            {
                v.push_back(i);
                v.push_back((i*-1));
                i++;   
            }
        }
    return v;}
};

