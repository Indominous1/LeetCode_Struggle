Problem Statement-
Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.
A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.

Example 1:
Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,]]

Output: true

Explanation:
> In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.

Example 2:
Input: matrix = [[1,2],[2,2]]

Output: false

Explanation:
> The diagonal "[1, 2]" has different elements.
 
Constraints:
-> m == matrix.length
-> n == matrix[i].length
-> 1 <= m, n <= 20
-> 0 <= matrix[i][j] <= 99
  
Related Topics-
> Array
> Matrix
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        bool flag=true;
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
                if(i==0 || j==0)
                {
                    continue;
                }
                else
                {
                    if(m[i][j]!=m[i-1][j-1])
                    {
                        flag=false;
                        break;
                    }
                }
            }
            if(flag==false)
                break;
        }
  return flag;  }
};

