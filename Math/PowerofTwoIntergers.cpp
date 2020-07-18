//https://www.interviewbit.com/problems/power-of-two-integers/
int Solution::isPower(int A) {
if(A==1)
    return 1;
for(int i=2;i*i<=A;i++)
{
    int x=A;
    while(x%i==0)
    {
        x/=i;
        if(x==1)
            return 1;
    }
}
return 0;
}