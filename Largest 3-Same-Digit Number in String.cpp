Problem Statement-
You are given a string num representing a large integer. An integer is good if it meets the following conditions:
- It is a substring of num with length 3.
- It consists of only one unique digit.
Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:
- A substring is a contiguous sequence of characters within a string.
- There may be leading zeroes in num or a good integer.
 
Example 1:
Input: num = "6777133339"

Output: "777"

Explanation: 
- There are two distinct good integers: "777" and "333".
- "777" is the largest, so we return "777".

Example 2:
Input: num = "2300019"

Output: "000"

Explanation: 
- "000" is the only good integer.

Example 3:
Input: num = "42352338"

Output: ""

Explanation: 
- No substring of length 3 consists of only one unique digit. Therefore, there are no good integers.

Constraints:
-> 3 <= num.length <= 1000
-> num only consists of digits.
  
Related Topics-
> String
 
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string largestGoodInteger(string n) {

        string d="",ans="";
        for(int i=0;i<n.size()-2;i++)
        {
            d="";
            if(n[i]==n[i+1] && n[i]==n[i+2])
            {
                 d=d+n[i]+n[i+1]+n[i+2];
                 int n=d[0]-'0';
                 int m=ans[0]-'0';
                 if(n>m)
                 {
                  ans=d;
                 }
            }
        }
        return ans;
    }
};

