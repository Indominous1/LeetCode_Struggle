Problem Statement-
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, 
which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because 
the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction 
is used:
> I can be placed before V (5) and X (10) to make 4 and 9. 
> X can be placed before L (50) and C (100) to make 40 and 90. 
> C can be placed before D (500) and M (1000) to make 400 and 900.

Given an integer, convert it to a roman numeral.

Example 1:
Input: num = 3

Output: "III"

Explanation:
> 3 is represented as 3 ones.

Example 2:
Input: num = 58

Output: "LVIII"

Explanation: L = 50, V = 5, III = 3.

Example 3:
Input: num = 1994

Output: "MCMXCIV"

Explanation:
> M = 1000, CM = 900, XC = 90 and IV = 4.
 
Constraints:
-> 1 <= num <= 3999
  
Related Topics-
> Hash Table
> Math
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string intToRoman(int n) {
        string s="";
        while(n)
        {
            if(n>=1000)
            {
                s+='M';
                n-=1000;
                continue;
            }
            else
            {
                if(n>=900)
                {
                    s+="CM";
                    n-=900;
                    continue;
                }  
            }
            if(n>=500)
            {
                s+='D';
                n-=500;
                continue;
            }
            else
            {
                if(n>=400)
                {
                    s+="CD";
                    n-=400;
                    continue;
                }
            }
            if(n>=100)
            {
                s+='C';
                n-=100;
                continue;
            }
            else
            {
                if(n>=90)
                {
                    s+="XC";
                    n-=90;
                    continue;
                }
            }
            if(n>=50)
            {
                s+='L';
                n-=50;
                continue;
            }
            else{
                if(n>=40)
                {
                    s+="XL";
                    n-=40;
                    continue;
                }
            }
            if(n>=10)
            {
                s+='X';
                n-=10;
                continue;
            }
            else{
                if(n==9)
                {
                    s+="IX";
                    n-=9;
                    continue;
                }
            }
            if(n>=5)
            {
                s+='V';
                n-=5;
                continue;
            }
            else
            {
                if(n==4)
                {
                    s+="IV";
                    n-=4;
                    continue;
                }
            }
            if(n>=1)
            {
                s+='I';
                n--;
                continue;
            }
        }
    return s;
    }
};

