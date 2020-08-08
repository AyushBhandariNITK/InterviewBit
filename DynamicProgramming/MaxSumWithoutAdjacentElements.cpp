//https://www.interviewbit.com/problems/max-sum-without-adjacent-elements/
int Solution::adjacent(vector<vector<int> > &A)
{
    int n=A[0].size();
    for(int i=0;i<n;i++)
        A[0][i]=max(A[0][i],A[1][i]);
    vector<int> dp(n);
    dp[0]=A[0][0];
    dp[1]=max(dp[0],A[0][1]);
    for(int i=2;i<n;i++)
        dp[i]=max(dp[i-1],dp[i-2]+A[0][i]);
    return dp[n-1];
}
