Problem Statement-
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

Example 1:
Input: head = [1,1,2]

Output: [1,2]

Example 2:
Input: head = [1,1,2,3,3]

Output: [1,2,3]
 
Constraints:
-> The number of nodes in the list is in the range [0, 300].
-> -100 <= Node.val <= 100
-> The list is guaranteed to be sorted in ascending order.
  
Related Topics-
> Linked List
  
   ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution-
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode *curr=head;
        ListNode *temp=head->next;
        while(temp)
        {
            if(curr->val!=temp->val)
            {
                curr->next=temp;
                curr=temp;
            }
                temp=temp->next;
        }
        curr->next=NULL;
   return head;}
};

