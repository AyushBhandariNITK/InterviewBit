//https://www.interviewbit.com/problems/grid-unique-paths/
int Solution::uniquePaths(int A, int B) 
{
    vector<vector<int>> arr(A,vector<int>(B));
    for(int i=0;i<A;i++)
        arr[i][0]=1;
    for(int i=0;i<B;i++)
        arr[0][i]=1;
    for(int i=1;i<A;i++)
    {
        for(int j=1;j<B;j++)
            arr[i][j]=arr[i][j-1]+arr[i-1][j];
    }
    return arr[A-1][B-1];
}
