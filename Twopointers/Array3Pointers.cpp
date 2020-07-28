//https://www.interviewbit.com/problems/array-3-pointers/
int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) 
{
    int minval,i=0,j=0,k=0,val=INT_MAX,maxval;
    while(i<A.size()&&j<B.size()&&k<C.size())
    {
        minval=min({A[i],B[j],C[k]});
        maxval=max({A[i],B[j],C[k]});
        val=min(val,maxval-minval);
        if(val==0)
            break;
        if(minval==A[i])
            i++;
        else if(minval==B[j])
            j++;
        else
            k++;
    }
    return val;
}