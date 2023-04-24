Problem Statement-
You are given an integer array digits, where each element is a digit. The array may contain duplicates.

You need to find all the unique integers that follow the given requirements:
- The integer consists of the concatenation of three elements from digits in any arbitrary order.
- The integer does not have leading zeros.
- The integer is even.

For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

Return a sorted array of the unique integers.
 
Example 1:
Input: digits = [2,1,3,0]

Output: [102,120,130,132,210,230,302,310,312,320]

Explanation:
- All the possible integers that follow the requirements are in the output array. 
- Notice that there are no odd integers or integers with leading zeros.

Example 2:
Input: digits = [2,2,8,8,2]

Output: [222,228,282,288,822,828,882]

Explanation:
- The same digit can be used as many times as it appears in digits. 
- In this example, the digit 8 is used twice each time in 288, 828, and 882. 

Example 3:
Input: digits = [3,7,5]

Output: []

Explanation:
- No even integers can be formed using the given digits.
 
Constraints:
-> 3 <= digits.length <= 100
-> 0 <= digits[i] <= 9
  
Related Topics-
> Array
> Hash Table
> Sorting
> Enumeration
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        map<int,int> mp;
        for(int i=0;i<d.size();i++)
         mp[d[i]]++;
        vector<int> ans;
        for(int i=100;i<999;i+=2)
        {
            string s=to_string(i);
            int x=s[0]-'0',y=s[1]-'0',z=s[2]-'0';
            map<int,int> v=mp;
            bool f1=false,f2=false,f3=false;
            if(v[x]>0)
            {
                f1=true;
                v[x]--;
            }
            if(v[y]>0)
            {
                f2=true;
                v[y]--;
            }
            if(v[z]>0)
            {
                f3=true;
                v[z]--;
            }
            if(f1==true && f2==true && f3==true)
             ans.push_back(i);
        }
        return ans;
    }
};

