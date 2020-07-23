//https://www.interviewbit.com/problems/number-of-1-bits/
int Solution::numSetBits(unsigned int A)
{
    int cnt=0; 
    while(A) 
    { 
        cnt+= A&1; 
        A>>= 1; 
    } 
    return cnt;
}
//Method 2: __builtin_popcount(A)