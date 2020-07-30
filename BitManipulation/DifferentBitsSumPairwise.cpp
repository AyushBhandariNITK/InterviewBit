//https://www.interviewbit.com/problems/different-bits-sum-pairwise/
int M=1e9+7;
int Solution::cntBits(vector<int> &A) 
{
    int sum=0;
    for(int i=0;i<32;i++)
    {
        int cnt=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]&(1<<i))
                cnt++;
        }
        sum=((sum%M)+(cnt*(A.size()-cnt))%M)%M;
    }
    return (2*sum)%M;
}
