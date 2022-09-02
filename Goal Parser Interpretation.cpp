Problem Statement-
You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret 
"G" as the string "G", "()" as the string "o", and "(al)" as the string "al".The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.

Example 1:
Input: command = "G()(al)"

Output: "Goal"

Explanation: The Goal Parser interprets the command as follows:
  G -> G
  () -> o
  (al) -> al
The final concatenated result is "Goal".
  
Example 2:
Input: command = "G()()()()(al)"

Output: "Gooooal"

Example 3:
Input: command = "(al)G(al)()()G"

Output: "alGalooG"
  
Related Topics-
> String

 ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    string interpret(string s) {
        string n="";
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='(')
            {
                if(s[i+1]==')')
                {   n=n+'o';
                    i+=2;
                }
                else if(s[i+1]=='a' && s[i+2]=='l' && s[i+3]==')')
                {
                    n=n+"al";
                    i+=4;
                }
            }
             else
              {
                 n=n+s[i];
                 i++;
              }
        }
        return n;
    }
};
