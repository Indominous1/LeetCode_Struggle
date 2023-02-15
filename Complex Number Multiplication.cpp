Problem Statement-
A complex number can be represented as a string on the form "real+imaginaryi" where:
- real is the real part and is an integer in the range [-100, 100].
- imaginary is the imaginary part and is an integer in the range [-100, 100].
- i2 == -1.

Given two complex numbers num1 and num2 as strings, return a string of the complex number that represents their multiplications.

Example 1:
Input: num1 = "1+1i", num2 = "1+1i"

Output: "0+2i"

Explanation:
- (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.

Example 2:
Input: num1 = "1+-1i", num2 = "1+-1i"

Output: "0+-2i"

Explanation:
- (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need convert it to the form of 0+-2i.
 
Constraints:
-> num1 and num2 are valid complex numbers.
  
Related Topics-
> Math
> String
> Simulation
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string complexNumberMultiply(string s1, string s2) {
        int j1=s1.find('+'),j2=s2.find('+');
        
        int rn1=stoi(s1.substr(0,j1));
       / int rn2=stoi(s2.substr(0,j2));
        int in1=stoi(s1.substr(j1+1,s1.size()-1-j1));
        int in2=stoi(s2.substr(j2+1,s2.size()-1-j2));
        
        j1=((rn1*rn2)-(in1*in2));
        j2=((in1*rn2)+(rn1*in2));
        
        string ans="";
        ans+=(to_string(j1)+"+"+to_string(j2)+"i");
        return ans;
    }
};


