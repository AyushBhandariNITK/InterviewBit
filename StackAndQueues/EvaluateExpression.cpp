//https://www.interviewbit.com/problems/evaluate-expression/
int Solution::evalRPN(vector<string> &A) 
{
    stack<int> s;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]=="+"||A[i]=="-"||A[i]=="/"||A[i]=="*")
        {
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            if(A[i]=="+")
                s.push(x+y);
            else if(A[i]=="-")
                s.push(y-x);
            else if(A[i]=="/")
                s.push((int)(y/x));
            else if(A[i]=="*")
                s.push(x*y);
        }
        else
            s.push(stoi(A[i]));
    }
    return s.top();
}
