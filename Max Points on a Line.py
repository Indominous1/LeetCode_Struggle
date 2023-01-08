Problem Statement-
Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane, return the maximum number of points that lie on the same straight line.

Example 1:
Input: points = [[1,1],[2,2],[3,3]]

Output: 3

Example 2:
Input: points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]

Output: 4
 
Constraints:
-> 1 <= points.length <= 300
-> points[i].length == 2
-> -104 <= xi, yi <= 104
-> All the points are unique.

Related Topics-
> Array
> Hash Table
> Math
> Geometry
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution(object):
    def maxPoints(self, points):
        ll = len(points) 
        if ll == 1: return 1
        elif ll == 2: return 2
        else:
            ans = 0
            for i in list(combinations(points,2)):
                cnt = 0
                for j in points:
                    if (j[1] - i[0][1]) * (i[1][0] - i[0][0]) == (j[0] - i[0][0]) * (i[1][1] - i[0][1]):
                        cnt += 1
                ans = max(ans, cnt)
            return ans
          
