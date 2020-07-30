//https://www.interviewbit.com/problems/single-number-ii/
int Solution::singleNumber(const vector<int> &A)
{
    int num=0,x=0;
    for(int i=0;i<32;i++)
    {
        x=0;
        for(int j=0;j<A.size();j++)
        {
            bool b=A[j]&(1<<i);
            if(b)
                x++;
        }
        x%=3;
        if(x==1)
           num+=pow(2,i);
    }
    return num;
}