//https://www.interviewbit.com/problems/maximum-absolute-difference/

/*
Case 1: A[i] < A[j] and i < j
|A[i] - A[j]| = -(A[i]) + A[j]
|i -j| = -(i) + j
f(i, j) = -(A[i] + i) + (A[j] + j)

Case 2: A[i] > A[j] and i > j
|A[i] - A[j]| = A[i] - A[j]
|i -j| = i - j
f(i, j) = (A[i] + i) - (A[j] + j)

Case 3: A[i] < A[j] and i > j
|A[i] - A[j]| = -(A[i]) + A[j]
|i -j| = i - j
f(i, j) = -(A[i] - i) + (A[j] - j)

Case 4: A[i] > A[j] and i < j
|A[i] - A[j]| = A[i] - A[j]
|i -j| = -(i) + j
f(i, j) = (A[i] - i) - (A[j] - j)

case 1 and 2 are equivalent and case 3 and 4 are equivalent
*/
int Solution::maxArr(vector<int> &A) 
{
    int max1=INT_MIN,min1=INT_MAX,max2=INT_MIN,min2=INT_MAX,n=A.size(); 
    for (int i = 0; i < n; i++)
    { 
        max1 = max(max1, A[i] + i); 
        min1 = min(min1, A[i] + i); 
        max2 = max(max2, A[i] - i); 
        min2 = min(min2, A[i] - i); 
    } 
    return max(max1 - min1, max2 - min2); 
} 

