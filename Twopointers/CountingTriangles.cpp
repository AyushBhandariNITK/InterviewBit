int M=1e9+7;
int Solution::nTriang(vector<int> &A) 
{
    sort(A.begin(),A.end());
    int n=A.size();
    long long cnt=0;
    for(int i=n-1;i>=2;i--)
    {
        int l =0;int r =i-1;
        while(l<r)
        {
            if(A[l]+A[r]>A[i])
            {
                cnt=(cnt+r-l)%M;
                r--;
            }
            else l++;
        }
    }
return cnt;
}