int Solution::removeDuplicates(vector<int> &A)
{
    int n=A.size(),j=0,i=0;
    while(j<n)
    {
        int cnt=0,temp=A[j];
        while(j<n&&temp==A[j])
        {
            j++;
            cnt++;
        }
        A[i]=temp;
        i++;
        if(cnt>=2)
        {
            A[i]=temp;
            i++;
        }
    }
    return i;
}
