//https://www.interviewbit.com/problems/insertion-sort-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* findpos(ListNode* A)
{
    ListNode* head =A;
    while(A->next)
    {
        A=A->next;
        if(head->val>A->val)
        swap(head->val,A->val);
    }
    return head;
}

ListNode* Solution::insertionSortList(ListNode* A)
{
    if(A==NULL&&A->next==NULL)
        return A;
    ListNode* head=A;
    while(head->next)
    {
        head = findpos(head);
        head = head->next;
    }
    return A;
}
