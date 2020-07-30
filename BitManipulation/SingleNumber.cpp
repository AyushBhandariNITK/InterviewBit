//https://www.interviewbit.com/problems/single-number/
int Solution::singleNumber(const vector<int> &A) 
{
    int n=A.size(),val=A[0];
    for(int i=1;i<n;i++)
        val^=A[i];
    return val;
}
