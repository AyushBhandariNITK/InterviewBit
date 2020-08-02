//https://www.interviewbit.com/problems/square-root-of-integer/
int Solution::sqrt(int x) 
{
    if(x==0) 
        return 0;
    int l=1,r=x,ans;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if (mid<=x/mid)
        {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    return ans;
}
