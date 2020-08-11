//https://www.interviewbit.com/courses/programming/topics/binary-search/
int Solution::searchMatrix(vector<vector<int> > &A, int B)
{
    int n=A.size(),m=A[0].size(),ans=0;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[mid][0]>B)
            r=mid-1;
        else if(A[mid][0]<=B)
        {
            ans=mid;
            l=mid+1;
        }
    }
    l=0;
    r=m-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(A[ans][mid]<B)
            l=mid+1;
        else if(A[ans][mid]>B)
            r=mid-1;
        else 
            return 1;
    }
    return 0;
}