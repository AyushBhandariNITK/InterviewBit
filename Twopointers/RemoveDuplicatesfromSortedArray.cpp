//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
int Solution::removeDuplicates(vector<int> &A)
{
    int i=0,n=A.size(),cnt=0,j=0;
    while(i<n&&j<n)
    {
        int temp=A[j];
        while(j<n&&temp==A[j])
            j++;
        cnt++;
        A[i]=temp;
        i++;
    }
    A.resize(cnt);
    return cnt;
}
