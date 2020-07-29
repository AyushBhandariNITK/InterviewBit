//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) 
{
    if(head==NULL)
        return head;
    else
    {
        ListNode *curr=head;
        ListNode* nextidx;
        while(curr->next!=NULL)
        {
            nextidx=curr->next;
            if(curr->val!=nextidx->val)
                curr=nextidx;
            else
               curr->next=nextidx->next;
        }
    }
    return head;
}
