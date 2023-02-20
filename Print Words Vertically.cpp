Problem Statement-
Given a string s. Return all the words vertically in the same order in which they appear in s.
Words are returned as a list of strings, complete with spaces when is necessary. (Trailing spaces are not allowed).
Each word would be put on only one column and that in one column there will be only one word.

Example 1:
Input: s = "HOW ARE YOU"

Output: ["HAY","ORO","WEU"]

Explanation: Each word is printed vertically. 
 "HAY"
 "ORO"
 "WEU"

Example 2:
Input: s = "TO BE OR NOT TO BE"

Output: ["TBONTB","OEROOE","   T"]

Explanation: Trailing spaces is not allowed. 
"TBONTB"
"OEROOE"
"   T"

Example 3:
Input: s = "CONTEST IS COMING"

Output: ["CIC","OSO","N M","T I","E N","S G","T"]
 
Constraints:
-> 1 <= s.length <= 200
-> s contains only upper case English letters.
-> It's guaranteed that there is only one space between 2 words.
  
Related Topics-
> Array
> String
> Simulation
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    vector<string> printVertically(string s) {
        s+=" ";
        vector<string> v,ans;
        int mx=INT_MIN;
        string d="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
               v.push_back(d);
               int j=d.size();
               mx=max(j,mx);
               d=""; 
            }
            else
              d+=s[i];
        }
        for(int i=0;i<mx;i++)
        {
           d="";
           for(auto itr:v)
           {
              if(i>=itr.size()) d+=" ";
              else d+=itr[i];
           }
           int n=d.size()-1;
           while(d[n]==' ')
           {
             d.pop_back();
             n--;
           }
           ans.push_back(d);
        }
        
   return ans; }
};

