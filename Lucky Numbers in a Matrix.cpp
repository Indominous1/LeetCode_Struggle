Problem Statement-
Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

Example 1:
Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]

Output: [15]

Explanation:
> 15 is the only lucky number since it is the minimum in its row and the maximum in its column.

Example 2:
Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]

Output: [12]

Explanation:
> 12 is the only lucky number since it is the minimum in its row and the maximum in its column.

Example 3:
Input: matrix = [[7,8],[1,2]]

Output: [7]

Explanation:
> 7 is the only lucky number since it is the minimum in its row and the maximum in its column.
 
Constraints:
-> m == mat.length
-> n == mat[i].length
-> 1 <= n, m <= 50
-> 1 <= matrix[i][j] <= 105.
-> All elements in the matrix are distinct.
  
Related Topics-
> Array
> Matrix

   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& n) {
        vector<vector<int>>x=n,y=n;
        vector<int> mi,m,v;
        for(int i=0;i<n.size();i++)
        {
            sort(x[i].begin(),x[i].end());
            mi.push_back(x[i][0]);
        }
        for(int i=0;i<n[0].size();i++)
        {
            int mx=INT_MIN;
            for(int j=0;j<n.size();j++)
            {
                if(mx<n[j][i])
                    mx=n[j][i];
            }
            m.push_back(mx);
        }
        for(int i=0;i<m.size();i++)
        {
            vector<int>::iterator it;
            it=find(mi.begin(),mi.end(),m[i]);
            if(it != mi.end())
            {
                v.push_back(m[i]);
                break;
            }
        }
        return v;
    }
};

