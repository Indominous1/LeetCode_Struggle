Problem Statement-
Given a binary string s and a positive integer n, return true if the binary representation of all the integers in the range [1, n] are substrings of s, or false otherwise.
A substring is a contiguous sequence of characters within a string.

Example 1:
Input: s = "0110", n = 3

Output: true

Example 2:
Input: s = "0110", n = 4

Output: false

Constraints:
-> 1 <= s.length <= 1000
-> s[i] is either '0' or '1'.
-> 1 <= n <= 109
  
Related Topics-
> String
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string dectobi(int n)
    {
        string s="";
        while(n)
        {
            s+=to_string(n%2);
            n=n/2;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        return s;
    }

    bool queryString(string s, int k) {
       for(int i=1;i<=k;i++)
       {
          string g=dectobi(i);
          if(s.find(g)==string::npos)
           return false;
       }
    return true;}
};

