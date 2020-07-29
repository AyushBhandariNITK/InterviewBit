// https://www.interviewbit.com/problems/reorder-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A)
{   
    ListNode *temp,*prev,*mid=A,*curr=A,*newCurr,*newHead,*newTemp,*newPrev;
    if(A == NULL || A->next == NULL)
        return A;
    while(curr !=NULL && curr->next != NULL)
    {
        prev = mid;
        mid = mid->next;
        curr = (curr->next)->next;
    }
    prev->next = NULL;
    newCurr = mid;
    while(newCurr != NULL)
    {
        newTemp = newCurr->next;
        if(newCurr==mid)
        {
            newPrev = newCurr;
            newCurr->next = NULL;
            newCurr = newTemp;
        }
        else
        {
            newCurr->next = newPrev;
            newPrev = newCurr;
            newCurr = newTemp;
        }
    }
    newHead = newPrev;
    newCurr = newHead;
    curr = A;
    while(newCurr!=NULL&&curr!=NULL)
    {
        prev = curr;
        newPrev = newCurr;
        temp = curr->next;
        newTemp = newCurr->next;
        curr->next = newCurr;
        if(temp != NULL)
            newCurr->next = temp;
        curr = temp;
        newCurr = newTemp;
    }
    
    return A;
}
