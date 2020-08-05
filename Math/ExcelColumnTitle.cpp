//https://www.interviewbit.com/problems/excel-column-title/
string Solution::convertToTitle(int A)
{
    string ans;
    while (A)
    {
        ans = char ((A- 1) % 26 + 'A') + ans;
        A = (A - 1) / 26;
    }
    return ans;
}
