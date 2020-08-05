//https://www.interviewbit.com/problems/trailing-zeros-in-factorial/
int Solution::trailingZeroes(int A) 
{
    long long int i=5,sum=0;
    while(i<=A)
    {
        sum+=A/i;
        i*=5;
    }
    return sum;
}
