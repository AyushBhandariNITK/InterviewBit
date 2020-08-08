int Solution::lis(const vector<int> &A)
{
    int n=A.size();
    vector<int> dp(n,1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
            if(A[j]<A[i]&&dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
    }
    int maxval=0;
    for(int i=0;i<n;i++)
        maxval=max(maxval,dp[i]);
    return maxval;
}
