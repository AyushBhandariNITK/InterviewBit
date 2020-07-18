//https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    int n=A.size();
    vector<pair<int,int>> arr(n);
    long long int steps=0,x,y;
    for(int i=0;i<n;i++)
        arr[i]={A[i],B[i]};
    for(int i=0;i<n-1;i++)
    {
        x=arr[i].first-arr[i+1].first;
        y=arr[i].second-arr[i+1].second;
        steps+=max(abs(x),abs(y));
        
    }
    return steps;
}
