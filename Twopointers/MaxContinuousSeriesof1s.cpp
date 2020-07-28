//https://www.interviewbit.com/problems/max-continuous-series-of-1s/
vector<int> Solution::maxone(vector<int> &A, int B)
{
    int n=A.size(),maxval=INT_MIN;
    int count=0,l=0,k,p;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0) 
            count++;
        while(count>B)
        {
            if(A[l]==0)
                count--;
            l++;
        }
        if(maxval<i-l+1)
        {
            maxval=i-l+1;
            k=i;
            p=l;
        }
    }
    vector<int> v;
    for(int i=p;i<=k;i++)
        v.push_back(i);
    return v;
}

