// https://www.interviewbit.com/problems/reverse-link-list-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int m, int n)
{
    ListNode *curr=A,*prev,*temp,*start=NULL,*startTemp,*end,*endTemp;
    if(A==NULL)
        return NULL;
    int len=0;
    while(len<m)
    {
        len++;
        if(len == m-1)
            start = curr;
        else if(len == m)
            startTemp = curr;
        prev = curr;
        curr = curr->next;
    }
    while(len<n)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        len++;
        if(len==n)
        {
            endTemp = prev;
            end = curr;
            startTemp->next = end;
            if(start != NULL)
                start->next = endTemp;
            else if(start == NULL)
                A=endTemp;
        }
    }
    
    return A;
}
