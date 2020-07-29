// https://www.interviewbit.com/problems/sort-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* merge(ListNode* A, ListNode* B)
{
    if(A==NULL)
        return B;
    if(B==NULL)
        return A;
    ListNode* head=NULL;
    if(A->val<B->val)
    { 
        head=A; 
        A=A->next; 
    }
    else 
    { 
        head=B; 
        B=B->next; 
    }
    ListNode* p=head;
    while(A&&B)
    {
        if(A->val<B->val)
        { 
            p->next=A; 
            A=A->next; 
        } 
        else
        { 
            p->next=B; 
            B=B->next; 
        }
        p=p->next;
    }
    if(A)
        p->next=A;
    else
        p->next=B;
    return head;
}
ListNode* Solution::sortList(ListNode* A) 
{
    ListNode* head = A;   
    if(A==NULL||A->next==NULL)
        return A;
    ListNode *start=A,*end=A->next;  
    while(end != NULL && end->next != NULL)
    {
        start = start->next;
        end = (end->next)->next;
    }
    end=start->next;
    start->next = NULL;
    return merge(sortList(head), sortList(end)); 
}
