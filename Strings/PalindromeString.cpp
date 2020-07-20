//https://www.interviewbit.com/problems/sorted-insert-position/
int Solution::searchInsert(vector<int> &A, int B)
{
    int l=0,n=A.size(),r=n-1;
    while(l<=r)   
    {
        int mid=(l+r)/2;
        if(A[mid]>B)
            r=mid-1;
        else if(A[mid]<B)
            l=mid+1;
        else 
            return mid;
    }
    return l;
}
