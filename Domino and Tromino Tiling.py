Problem Statement-
You have two types of tiles: a 2 x 1 domino shape and a tromino shape. You may rotate these shapes.
Given an integer n, return the number of ways to tile an 2 x n board. Since the answer may be very large, return it modulo 109 + 7.

In a tiling, every square must be covered by a tile. Two tilings are different if and only if there are two 4-directionally adjacent cells on the board such that 
exactly one of the tilings has both squares occupied by a tile.

Example 1:
Input: n = 3

Output: 5

Explanation:
> The five different ways are show above.

Example 2:
Input: n = 1

Output: 1 

Constraints:
-> 1 <= n <= 1000
  
Related Topics-
> Dynamic Programming
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution(object):
    def numTilings(self, N):
        a, b, c = 0, 1, 1
        for i in range(N - 1): a, b, c = b, c, (c + c + a) % int(1e9 + 7)
        return c
      
