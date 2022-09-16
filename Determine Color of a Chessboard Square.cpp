Problem Statement-
You are given coordinates, a string that represents the coordinates of a square of the chessboard. Below is a chessboard for your reference.
Return true if the square is white, and false if the square is black.

The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first, and the number second.

Example 1:
Input: coordinates = "a1"

Output: false

Explanation:
> From the chessboard above, the square with coordinates "a1" is black, so return false.

Example 2:
Input: coordinates = "h3"

Output: true

Explanation:
> From the chessboard above, the square with coordinates "h3" is white, so return true.

Example 3:
Input: coordinates = "c7"

Output: false 

Constraints:
-> coordinates.length == 2
-> 'a' <= coordinates[0] <= 'h'
-> '1' <= coordinates[1] <= '8'
  
Related Topics-
> Math
> String

   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool squareIsWhite(string s) {
        map<char,int>mp;
        char c='a';
        for(int i=1;i<9;i++)
        {
            mp[c]=i;
            c++;
        }
        int n=mp[s[0]]+(s[1]-'0');
        if(n%2==1)
            return true;
        else
            return false;
    }
};

