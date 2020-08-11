//https://www.interviewbit.com/problems/matrix-median/
int Solution::findMedian(vector<vector<int> > &v)
{
    int n=v.size(),m=v[0].size();
    int mn=v[0][0],mx=v[0][m-1];
    for(int i=0; i<n; i++)
    {
        mn=min(mn,v[i][0]);
        mx=max(mx,v[i][m-1]);
    }
    int num_req=(n*m+1)/2;
    while(mn<mx)
    {
        int sum=0;
        int mid=mn+(mx-mn)/2;
         
        for(int i=0; i<n; i++)
           sum+=upper_bound(v[i].begin(),v[i].end(),mid)-v[i].begin();   
        if(sum>=num_req)
            mx=mid;
        else
            mn=mid+1;
    }
    return mx;
}

