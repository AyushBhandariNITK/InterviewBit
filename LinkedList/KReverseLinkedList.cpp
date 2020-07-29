//https://www.interviewbit.com/problems/k-reverse-linked-list/
ListNode* Solution::reverseList(ListNode* A, int B) 
{
    ListNode* cur = A, *head = NULL, *lst = A;
    while(cur) 
    {
        ListNode *prev=NULL,*nxt=NULL,*cur_lst=cur;
        for(int i=0;i<B;i++)
        {
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        if(!head)
            head = prev;
        else
            lst->next = prev;
        lst = cur_lst;
    }
    return head;
}