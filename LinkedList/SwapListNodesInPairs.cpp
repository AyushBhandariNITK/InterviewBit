/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A)
{
    if(A==NULL||A->next==NULL)
        return A;
    ListNode *curr=A,*nxt;
    while(curr!=NULL&&curr->next!=NULL)
    {
        nxt=curr->next;
        int t=curr->val;
        curr->val=nxt->val;
        nxt->val=t;
        curr=nxt->next;
    }
    return A;
}
