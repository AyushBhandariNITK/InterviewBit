int Solution::findMin(const vector<int> &A)
{
    int n=A.size();
    int l=0,r=n-1,idx=0;
    while(l<=r)
    {
        int mid =(l+r)/2;
        if(A[mid]<A[idx]) 
        {
            idx=mid;
            r = mid-1;
        }
        else
        l=mid+1;  
    }
    return A[idx];
}


