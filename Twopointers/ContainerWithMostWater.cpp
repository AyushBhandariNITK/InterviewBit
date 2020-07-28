//https://www.interviewbit.com/problems/container-with-most-water/
int Solution::maxArea(vector<int> &A) 
{
    int n=A.size(),l=0,r=n-1,area=0;
    while(l<r)
    {
        area=max(area,(r-l)*(min(A[l],A[r])));
        if(A[l]>A[r])
            r--;
        else
            l++;
    }
    return area;
}
