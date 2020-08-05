//https://www.interviewbit.com/problems/sorted-permutation-rank/
int M=1000003;
int Solution::findRank(string A)
{
    int n=A.size();
    long long int sum=0;
    vector<int> arr(n);
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<n;i++)
        arr[i]=((arr[i-1]%M)*(i%M))%M;
    for(int i=0;i<n;i++)
    {
        long long int cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
                cnt++;
        }
        sum+=((arr[n-i-1]%M)*(cnt%M))%M;
    }
    return (sum+1)%M;
}




