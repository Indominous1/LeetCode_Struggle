Problem Statement-
Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrixs row and column indices.
 
Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

Output: [[1,4,7],[2,5,8],[3,6,9]]

Example 2:
Input: matrix = [[1,2,3],[4,5,6]]

Output: [[1,4],[2,5],[3,6]]
 
Constraints:
-> m == matrix.length
-> n == matrix[i].length
-> 1 <= m, n <= 1000
-> 1 <= m * n <= 105
-> -10^9 <= matrix[i][j] <= 10^9
  
Related Topics-
> Array
> Matrix
> Simulation
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        int x=m.size();      //row number
        int y=m[0].size();   //column number
        vector<int>d;
        for(int i=0;i<y;i++)
        {
            for(int j=0;j<x;j++)
            {
                d.push_back(m[j][i]);
            }
        }
        vector<vector<int>>v;
        int k=0;
        for(int i=0;i<y;i++)
        {
            vector<int>s;
            for(int j=0;j<x;j++)
            {
                s.push_back(d[k]);
                k++;
            }
            v.push_back(s);
        }
        return v;
    }
};

