//https://www.interviewbit.com/problems/numbers-of-length-n-and-value-less-than-k/
int Solution::solve(vector < int > & A, int B, int C)
{
    if (!C || !A.size())
        return 0;
    vector <int> num;
    int c = C;
    while (C) 
    {
        num.push_back(C % 10);
        C /= 10;
    }
    if (B > num.size())
        return 0;
    else if (B < num.size())
    {
        if (B == 1)
            return A.size();
        int x = A.size();
        if (A[0] == 0)
            x--;
        return x * pow(A.size(), B - 1);
    }
    int len = num.size();
    int ans = 0;
    if (len == 1)
        return (lower_bound(A.begin(), A.end(), c) - A.begin());
    for (int i = len - 1; i >= 0; i--) 
    {
        int count = lower_bound(A.begin(), A.end(), num[i]) - A.begin(); 
        if (i == len - 1 && A[0] == 0)
            count--;
        ans += (count * pow(A.size(), i)); 
        if (!binary_search(A.begin(), A.end(), num[i]))
            return ans;
    }
    return ans;
}
