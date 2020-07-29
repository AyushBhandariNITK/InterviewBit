//https://www.interviewbit.com/problems/remove-nth-node-from-list-end/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) 
{
    if(A==NULL)
        return NULL;
    int n=0;
    ListNode* temp=A;
    while(temp!=NULL)
    {
        temp=temp->next;
        n++;
    }
    if(n<=B)
        A=A->next;
    else
    {
        int diff=n-B;
        temp=A;
        for(int i=0;i<n-B-1;i++)
            temp=temp->next;
        ListNode *curr=temp->next;
        if(curr==NULL)
            temp->next=NULL;
        else
            temp->next=curr->next;
    }
    return A;
}