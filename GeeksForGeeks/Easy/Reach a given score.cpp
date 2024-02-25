https://www.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1




class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
    	// Your code here
    	long long ans = 0;
    	for(int i=0;i<=n;i+=3)
    	    ans += (n-i)%5 ? 0 : (n-i)/10 + 1;
    	return ans;
    }
};