Problem Statement-
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order.
  The large integer does not contain any leading 0's. Increment the large integer by one and return the resulting array of digits.

Example 1:
Input: digits = [1,2,3]

Output: [1,2,4]

Explanation:
- The array represents the integer 123.
- Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

Example 2:
Input: digits = [4,3,2,1]

Output: [4,3,2,2]

Explanation:
- The array represents the integer 4321.
- Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].

Example 3:
Input: digits = [9]

Output: [1,0]

Explanation:
-The array represents the integer 9.
- Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
 
Constraints:
-> 1 <= digits.length <= 100
-> 0 <= digits[i] <= 9
-> digits does not contain any leading 0's.
  
Related Topics-
- Array
- Math
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int> v;
        if(d.size()==1 && d[0]<9)
        {
            v.push_back(d[0]+1);
             return v;
        }
        string val="";
        for(int i=0;i<d.size();i++)
            val+=to_string(d[i]);
        int i=val.size()-1,carry=1;
        while(carry)
        {
            int x=(val[i]-'0')+1;
            if(i==0 && val[i]=='9')
            {
               val[i]='0'+(x%10);
               carry=0;
               val.insert(val.begin(),'1');
            }
            else
            {
                val[i]='0'+(x%10);
                carry=x/10;
                i--;
            }
        }
        for(int i=0;i<val.size();i++)
        v.push_back(val[i]-'0');
        return v;
    }
};

