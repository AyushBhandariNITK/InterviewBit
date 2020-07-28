//https://www.interviewbit.com/problems/sort-by-color/
void Solution::sortColors(vector<int> &A)
{
    int n=A.size(),cnt0=0,cnt1=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
            cnt0++;
        else if(A[i]==1)
            cnt1++;
    }
    int i=0;
    for(i=0;i<cnt0;i++)
        A[i]=0;
    for(i=cnt0;i<cnt0+cnt1;i++)
        A[i]=1;
    for(i=cnt0+cnt1;i<n;i++)
        A[i]=2;

}

