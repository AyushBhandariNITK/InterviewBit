//https://www.interviewbit.com/problems/painters-partition-problem/
#define ll long long int
int M=10000003;
bool isvalid(int A, ll sum, vector<int> &C)
{
    int cnt=1;
    ll curr=0;
    for(int i=0;i<C.size();i++)
    {
        if(C[i]>sum)
            return false;
        if(curr+C[i]>sum)
        {
            cnt++;
            curr=0;
            if(cnt>A)
                return false;
        }
        curr+=C[i];
    }
    return true;
}
int Solution::paint(int A, int B, vector<int> &C) 
{

    ll l=INT_MAX,r=0;
    int n=C.size(),maxv=INT_MIN;
    for(int i=0;i<n;i++)
    {
        r+=C[i];
        maxv=max(maxv,C[i]);
        l=min(l,(ll)C[i]);
    }
    if(A>n)
        return ((maxv*B)%M;
    ll ans=LLONG_MAX;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(isvalid(A,mid,C))
        {
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }    
    return (ans*B)%M;
}



