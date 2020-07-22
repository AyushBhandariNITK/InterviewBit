//https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/
void Solution::merge(vector<int> &A, vector<int> &B)
{
    int i=A.size()-1,j=B.size()-1,curr=A.size()+B.size()-1;
    A.resize(A.size()+B.size());
    while(j >= 0)
    {
        if(i>=0 and A[i]>B[j])
            A[curr--]=A[i--];
        else
            A[curr--]=B[j--];
    }
}

