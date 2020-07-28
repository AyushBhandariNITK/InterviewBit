//https://www.interviewbit.com/problems/3-sum-zero/
vector<vector<int> > Solution::threeSum(vector<int> &A)
{
    int n=A.size();
    vector<vector<int>> v;
    if(A.size()>=3)
    {
        sort(A.begin(), A.end());
        for(int i=0;i<A.size()-2; i++) 
        {
            long long int a = A[i];
            if(a>0)
                break;
            if (i>0&&a==A[i-1])
                continue;
            int j=i+1,k=n-1;
            while(j<k)
            {
                long long int b=A[j],c=A[k],val=a+b+c;
                if (val==0)
                {
                    v.push_back({a, b, c});
                    while (j<k&&b==A[++j]);
                    while (j<k&&c==A[--k]);
                }
                else if(val>0)
                    k--;
                else
                    j++;
            }
        }
    }
    return v;
}

