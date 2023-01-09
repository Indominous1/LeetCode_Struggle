Problem Statement-
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Example 1:
Input: head = [1,2,2,1]

Output: true
  
Example 2:
Input: head = [1,2]

Output: false

Constraints:
-> The number of nodes in the list is in the range [1, 105].
-> 0 <= Node.val <= 9
 
Related Topics-
> Linked List 
> Pointer
> Stack
> Recursion
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        bool flag=true;
        ListNode *e=head;
        vector<int>v;
        while(e)
        {
            v.push_back(e->val);
            e=e->next;
        }
        for(int i=0;i<v.size();i++)
        {
           if(v[i]!=v[v.size()-1-i])
            {
                flag=false;
                break;
            }
            if(i>v.size()/2)
                break;
        }
   return flag; }
};

