//https://www.interviewbit.com/problems/largest-number/
bool myCompare(int x, int y)
{
    string X = to_string(x);
    string Y = to_string(y);
    string xy=X+Y,yx=Y+X;
    cout<<xy<<" "<<yx<<"\n";
    return xy.compare(yx) > 0 ? 1: 0; 
}

string Solution::largestNumber(const vector<int> &A) {
vector<int> B;
bool y = true;
for (int i=0; i<A.size(); i++)
{
    B.push_back(A[i]);
    if(A[i]>0)
        y=false;
}
if(y)
    return "0";
string str ;
sort(B.begin(), B.end(), myCompare);
for (int i=0; i<B.size(); i++)
    str.append(to_string(B[i]));
return str;
}