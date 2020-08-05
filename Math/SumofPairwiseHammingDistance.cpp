//https://www.interviewbit.com/problems/sum-of-pairwise-hamming-distance/
int Solution::hammingDistance(const vector<int> &A) 
{
    int sum=0,M=1e9+7;;
    for(int i=0;i<32;i++)
    {
        int count=0;
        for(int j=0;j<A.size();j++)
            if(A.at(j) & 1<<i)
                count++;
        sum+=((count*(A.size()-count))*2)%M;
        sum=sum%M;
    }
    return sum;
}

