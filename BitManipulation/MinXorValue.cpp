//https://www.interviewbit.com/problems/min-xor-value/
int Solution::findMinXor(vector<int> &A) 
{
    int n=A.size(),minval=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<n-1;i++)
        minval=min(minval,A[i]^A[i+1]);
    return minval;
}
