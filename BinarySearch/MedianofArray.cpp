//https://www.interviewbit.com/problems/median-of-array/
double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B)
{
    int m=A.size();
    int n=B.size();
    if(m>n)
        return findMedianSortedArrays(B,A);
    int start=0;
    int end=m;
    while(start<=end)
    {
        int i=start+(end-start)/2;
        int j=(m+n+1)/2-i;
        int min1=(i==m)?INT_MAX:A[i];
        int min2=(j==n)?INT_MAX:B[j];
        int max1=(i==0)?INT_MIN:A[i-1];
        int max2=(j==0)?INT_MIN:B[j-1];
        if(max1<=min2 && max2 <=min1)
        {
            if((m+n)%2==0)
                return (double)(max(max1,max2)+min(min1,min2))/2;
            else
                return (double)max(max1,max2);
        }
        else if(max1 min2)
            end=i-1;
        else
            start=i+1;
    }
}

