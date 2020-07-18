int M=1e9+7;
long long int ans;
int Solution::solve(int A, vector<int> &B) 
{
    int n=A,m=B.size();
    vector<vector<long long int>> nCr(n+1,vector<long long int>(m+1));
    vector<long long int> pow(n+1);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                nCr[i][j]=1;
            else nCr[i][j]=(nCr[i-1][j-1]+nCr[i-1][j])%M;
        }
    }
    sort(B.begin(),B.end());
    pow[0]=1;
    pow[1]=1;
    for(int i=2;i<=n;i++) 
        pow[i]=(pow[i-1]*2)%M;
    long long int cnt=0,tmp;
    for(int i=0;i<m;i++)
    {
        if(i==0)
            tmp=B[i]-1;
        else
        {
            tmp=B[i]-B[i-1]-1;
            ans=(ans*pow[tmp])%M;
        }
        cnt+=tmp;
        ans=(ans*nCr[cnt][tmp])%M;
    }
    cnt+=n-B[m-1];
    ans=ans*nCr[cnt][n-B[m-1]]%M;
    return ans;
}
