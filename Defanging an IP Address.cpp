Problem Statement-
  
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".

Example 1:
> Input: address = "1.1.1.1"
  
> Output: "1[.]1[.]1[.]1"
  
Example 2:
> Input: address = "255.100.50.0"
 
> Output: "255[.]100[.]50[.]0"
 

Constraints:
-> The given address is a valid IPv4 address.
  
Related Topics:
> String
  
 ----------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
  
class Solution {
public:
    string defangIPaddr(string s) {
        string n="";
for(int i=0;i<s.size();i++)
{
   if(s[i]=='.')
   {
      n=n+"["+s[i]+"]";
   }
   else
   {
     n=n+s[i];
   }
}
 return n;
    }
};
