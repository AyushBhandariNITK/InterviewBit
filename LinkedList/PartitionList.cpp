//https://www.interviewbit.com/problems/partition-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) 
{
    ListNode *temp=A,*prev=NULL;
    if(A==NULL||A->next==NULL)
        return A;
    while(temp!=NULL)
    {
        if(temp->val>B)
        {
            ListNode *curr=temp,*p;
            while(curr!=NULL&&curr->val>B)
            {
                p=curr;
                curr=curr->next;
            }
            if(curr!=NULL)
            {
                if(prev==NULL)
                {
                    curr->next=temp;
                    A=curr;
                }
                else
                {
                    p->next=curr->next;
                    curr->next=temp;
                    prev->next=curr;
                }
            }
                   
        }
        prev=temp;
        temp=temp->next;
    }
}
