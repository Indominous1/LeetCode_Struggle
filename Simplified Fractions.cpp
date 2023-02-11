Problem Statement-
Given an integer n, return a list of all simplified fractions between 0 and 1 (exclusive) such that the denominator is less-than-or-equal-to n. You can return the answer
in any order.

Example 1:
Input: n = 2

Output: ["1/2"]

Explanation:
> "1/2" is the only unique fraction with a denominator less-than-or-equal-to 2.

Example 2:
Input: n = 3

Output: ["1/2","1/3","2/3"]

Example 3:
Input: n = 4

Output: ["1/2","1/3","1/4","2/3","3/4"]

Explanation:
> "2/4" is not a simplified fraction because it can be simplified to "1/2".
 
Constraints:
-> 1 <= n <= 100
  
Related Topics-
> Math
> String
> Number Theory
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        for(int i=2;i<=n;i++)
        {
            string g=to_string(1)+'/'+to_string(i);
            v.push_back(g);
        }
        for(int i=2;i<n;i++)
        {
            for(int j=2;j<=n;j++)
            {
                if(i/j < 1 && i%j!=0 && j%i!=0 && __gcd(i,j)<=1)
                {
                    string g=to_string(i)+'/'+to_string(j);
                    v.push_back(g);
                }
            }
        }
        return v;
    }
};

