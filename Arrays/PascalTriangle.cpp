int compute(int line, int index)
{
    if(index == 0)
        return 1;
    else
        return compute(line, index-1)*(line-index+1)/index;
}
vector<vector<int> > Solution::solve(int A) {
        vector<vector<int> > tri(A);
    for(int i = 0; i < A; i++){
        for(int j = 0; j <= i; j++){
            tri[i].push_back(compute(i, j));
        }
    }
    return tri;
}



