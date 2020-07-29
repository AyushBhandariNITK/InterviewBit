//https://www.interviewbit.com/problems/palindrome-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) 
{
    vector<int> arr;
    while(A!=NULL)
    {
        arr.push_back(A->val);
        A=A->next;
    }
    int l=0,r=arr.size()-1;
    while(l<=r)
    {
        if(arr[l]!=arr[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}
