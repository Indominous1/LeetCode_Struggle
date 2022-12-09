Problem Statement-
A square matrix is said to be an X-Matrix if both of the following conditions hold:
> All the elements in the diagonals of the matrix are non-zero.
> All other elements are 0.
Given a 2D integer array grid of size n x n representing a square matrix, return true if grid is an X-Matrix. Otherwise, return false.
 
Example 1:
Input: grid = [[2,0,0,1],[0,3,1,0],[0,5,2,0],[4,0,0,2]]

Output: true

Explanation:
> An X-Matrix should have the green elements (diagonals) be non-zero and the red elements be 0.
Thus, grid is an X-Matrix.
  
Example 2:
Input: grid = [[5,7,0],[0,3,1],[0,5,0]]

Output: false

Explanation:
> An X-Matrix should have the green elements (diagonals) be non-zero and the red elements be 0.
Thus, grid is not an X-Matrix.
  
Constraints:
-> n == grid.length == grid[i].length
-> 3 <= n <= 100
-> 0 <= grid[i][j] <= 105
  
Related Topics-
> Array
> Matrix
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& g) {
        bool flag=true;
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g.size();j++)
            {
                if(i==j || j==(g.size()-1-i))
                {
                    if(g[i][j]==0)
                    {
                        flag=false;
                        break;
                    }
                }
                else
                {
                    if(g[i][j]!=0)
                    {
                        flag=false;
                        break;
                    }
                }      
            }
            if(flag==false)
                break;
        }
   return flag; }
};

