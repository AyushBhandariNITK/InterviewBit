//https://www.interviewbit.com/problems/fizzbuzz/
vector<string> Solution::fizzBuzz(int A)
{
    vector<string > a(A);
    for(int i=0;i<A;i++)
    {
        if((i+1)%15==0)
            a[i]+="FizzBuzz";
        else
        {
            if((i+1)%3==0)
                a[i]+="Fizz";
            else if((i+1)%5==0)
                a[i]+="Buzz";
            else 
                a[i]= to_string(i+1);
        }
    }
    return a;
}
