//https://www.interviewbit.com/problems/rotate-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) 
{
    if(A==NULL||A->next==NULL)
        return A;
    ListNode *temp=A,*last=NULL;
    int len=0;
    while(temp!=NULL)
    {
        last=temp;
        temp=temp->next;
        len++;
    }
    int rotate=B%len;
    if(rotate==0)
        return A;
    else
    {   
        int val=len-rotate-1;
        ListNode *temp=A;
        while(val>0)
        {
            temp=temp->next;
            val--;
        }
        last->next=A;
        A=temp->next;
        temp->next=NULL;
    }
    return A;
}