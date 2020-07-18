//https://www.interviewbit.com/problems/prime-sum/
vector<int> Solution::primesum(int A) 
{
    int n=A;
    vector<bool> prime(n+1,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<n;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
                prime[j]=false;
        }
    }
    vector<int> p(2);
    for(int i=2;i<=n;i++)
    {
        if(prime[i]&&prime[n-i])
        {
            p[0]=i;
            p[1]=n-i;
            break;
        }
    }
    return p;       

}
