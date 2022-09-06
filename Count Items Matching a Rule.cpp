Problem Statement-
You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. You are also given a rule represented by 
two strings, ruleKey and ruleValue.

The ith item is said to match the rule if one of the following is true:

ruleKey == "type" and ruleValue == typei.
ruleKey == "color" and ruleValue == colori.
ruleKey == "name" and ruleValue == namei.
Return the number of items that match the given rule.

Example 1:
Input: 
 items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], 
 ruleKey = "color", 
 ruleValue = "silver"
    
Output: 1
  
Explanation: 
> There is only one item matching the given rule, which is ["computer","silver","lenovo"].
  
Example 2:
Input: 
 items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]], 
 ruleKey = "type", 
 ruleValue = "phone"
   
Output: 2
  
Explanation:
> There are only two items matching the given rule, which are ["phone","blue","pixel"] and ["phone","gold","iphone"]. 
  Note that the item ["computer","silver","phone"] does not match.
 
Constraints:
-> 1 <= items.length <= 104
-> 1 <= typei.length, colori.length, namei.length, ruleValue.length <= 10
-> ruleKey is equal to either "type", "color", or "name".
-> All strings consist only of lowercase letters.
  
Related Topics:
> Array 
> String

   --------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    int countMatches(vector<vector<string>>& i, string rk, string rv) {
        int u,count=0;
        if(rk[0]=='t')
            u=0;
        else if(rk[0]=='c')
            u=1;
        else if(rk[0]=='n')
            u=2;
        int flag=1;
        for(int j=0;j<i.size();j++)
        {
            flag=1;
            int s=i[j][u].size();
            for(int k=0;k<s;k++)
            {
                if(i[j][u].size()==rv.size())
                {
                 if(i[j][u][k]!=rv[k])
                {
                    flag=0;
                    break;
                }
                }
               else
               {
                   flag=0;
                   break;
               }
            }
            if(flag==1)
                count++;
        }
        return count;
    }
};

