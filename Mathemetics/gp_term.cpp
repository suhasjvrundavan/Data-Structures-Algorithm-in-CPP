GP Term 

Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series.

Example 1:

Input:
A = 2 
B = 3
N = 1
Output: 2

Explanation: The first term is already
given in the input as 2

Example 2:

Input:
A = 1
B = 2
N = 2
Output: 2

Explanation: Common ratio = 2,
Hence second term is 2.

Solution:

class Solution{
    public:
        //Complete this function
    double termOfGP(int a,int b,int n)
    {
        //Your code here
        double nth=0;
        double r=0;
        r = ((double)b) / a;
        nth = a * pow(r,n-1);
        return nth;
    }
};
