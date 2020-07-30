//https://www.interviewbit.com/problems/reverse-bits/
unsigned int Solution::reverse(unsigned int A)
{
    unsigned int val=0;
    for(int i=0;i<32;i++)
    {
        if(A&(1<<i))
            val+=pow(2,31-i);
    }
    return val;
}
