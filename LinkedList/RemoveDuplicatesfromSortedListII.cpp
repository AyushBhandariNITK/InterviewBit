//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list-ii/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A)
{
    ListNode* list= new ListNode(0); 
    list->next=A; 
    ListNode *prev=list,*curr=A;
    while(curr != NULL) 
    { 
        while(curr->next!=NULL&&prev->next->val==curr->next->val) 
            curr=curr->next; 
          if (prev->next==curr) 
            prev=prev->next; 
        else
            prev->next=curr->next; 
        curr=curr->next; 
    } 
    A=list->next;
    return A;
}