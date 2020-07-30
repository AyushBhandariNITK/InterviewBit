//https://www.interviewbit.com/problems/count-total-set-bits/
#define ll long long int
ll leftmost (ll n)
{     
    int pos=0;
    while(n>1)
    {
        pos++;
        n=n>>1;
    }
    return pos;
}
ll countBits (ll n)
{
    if(n==0)
        return 0;
    ll m=leftmost(n);
    if(n==((1<<(m+1))-1))
        return ((m+1)*(1<<m));
    n=n-(1<<m); 
    return (n+1)+(m*(1<<(m-1)))+countBits(n); 
}
int Solution::solve(int n) 
{
    ll result = countBits(n);
    return result%MOD;
}

