void Solution::arrange(vector<int> &A)
{
   int n=A.size(),temp,prev;
    for(int i=0;i<n;i++)
        A[i]=n*(A[A[i]]%n)+A[i];                
    /* 
    A[i]=x,A[A[i]=y
    x=n*y+x i.e making it multiple of other no.
    */
    for(int i=0;i<n;i++)
        A[i]/=n;
}
