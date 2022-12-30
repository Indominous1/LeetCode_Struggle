Problem Statement-
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.
Note that after backspacing an empty text, the text will continue empty.

Example 1:
Input: s = "ab#c", t = "ad#c"

Output: true

Explanation:
- Both s and t become "ac".

Example 2:
Input: s = "ab##", t = "c#d#"

Output: true

Explanation:
- Both s and t become "".

Example 3:
Input: s = "a#c", t = "b"

Output: false

Explanation:
- s becomes "c" while t becomes "b".
 
Constraints:
-> 1 <= s.length, t.length <= 200
-> s and t only contain lowercase letters and '#' characters.
  
Related Topics-
> Two Pointers
> String
> Stack
> Simulation
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st,tt;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(!st.empty())
                 st.pop();
            }
            else
             st.push(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(!tt.empty())
                 tt.pop();
            }
            else
             tt.push(t[i]);
        }
        bool flag=true;
        while(!st.empty() && !tt.empty())
        {
           // cout<<st.top()<<" "<<tt.top()<<endl;
            if(st.top()!=tt.top())
            {
                flag=false;
                break;
            }
            st.pop();
            tt.pop();
        }
        if(!st.empty() || !tt.empty())
         return false;
   return flag; }
};

