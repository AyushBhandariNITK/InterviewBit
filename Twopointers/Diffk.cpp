//https://www.interviewbit.com/problems/diffk/
int Solution::diffPossible(vector<int> &A, int B)
{
    int i=0,j=0;
    while(i<A.size() && j<A.size())
    {
        if(A[j]-A[i]==B&&i!=j)
            return 1;
        else if(A[j]-A[i]>B)
        {
            i++;
            continue;
        }
        j++;
    }
    return 0;
}