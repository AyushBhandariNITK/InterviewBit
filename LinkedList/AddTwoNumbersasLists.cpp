//https://www.interviewbit.com/problems/add-two-numbers-as-lists/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) 
{
    ListNode *list=NULL,*head=NULL;
    int carry=0;
    while(A!=NULL||B!=NULL)
    {
        int sum=0;
        if(carry)
            sum=carry;
        if(A!=NULL)
        {
            sum+=A->val;
            A=A->next;
        }
        if(B!=NULL)
        {
            sum+=B->val;
            B=B->next;
        }
        ListNode* new_node = (ListNode*) malloc(sizeof(ListNode));
        new_node->val=sum%10;
        new_node->next=NULL;
        if(head==NULL)
        {
            list=new_node;
            head=list;
        }
        else
        {
            list->next=new_node;
            list=new_node;
        }
        carry=sum/10;
    }

    if(carry)
    {
        ListNode* new_node = (ListNode*) malloc(sizeof(ListNode));
        new_node->val=carry;
        new_node->next=NULL;
        list->next=new_node;
        list=new_node;
    }
    return head;
}
