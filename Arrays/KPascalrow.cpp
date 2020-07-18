//https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/
vector<int> Solution::getRow(int A) 
{
    int n=A;
    vector<int> ans(n+1);
    ans[0]=1;
    for(int r=1; r<=n; r++)
        ans[r]= (ans[r-1]*(n-(r-1)))/r;
    return ans;
}
