//https://www.interviewbit.com/problems/longest-common-subsequence/
int lcslength(string A,string B)
{
    int m=A.size(),n=B.size();
    vector<vector<int>> lcs(m+1,vector<int>(n+1));
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            lcs[i][j]=lcs[i+1][j+1];
            if(A[i]==B[j])
                lcs[i][j]++;
            lcs[i][j]=max({lcs[i][j],lcs[i+1][j],lcs[i][j+1]});
        }
    }
    return lcs[0][0];
}
int Solution::solve(string A, string B)
{
    return lcslength(A,B);
}
