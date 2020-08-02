//https://www.interviewbit.com/problems/search-for-a-range/
vector<int> Solution::searchRange(const vector<int> &A, int B)
{
    
    vector<int> a(2,-1);
    int n=A.size(),l=0,r=n-1,res=-1; 
    while(l<=r)
    { 
        int mid=(l+r)/2; 
        if (A[mid]>B) 
            r=mid-1; 
        else if (A[mid]<B) 
            l=mid+1; 
        else 
        { 
            res=mid; 
            r=mid-1; 
        } 
    } 
    if(res!=-1)
    {
        a[0]=res;
        l=0;
        r=n-1;
        res=-1;
        while (l<=r) 
        {
            int mid=(l+r)/2; 
            if (A[mid]>B) 
                r=mid-1; 
            else if (A[mid]<B) 
                l=mid+1; 
            else
            { 
                res=mid; 
                l=mid+1; 
            } 
        } 
        a[1]=res;
    }
    return a;
}
