https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1




class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        if(n == 0)
            return 0;
        int count =  1;
        while(true){
            if(n & 1)
                return count;
            n = n >> 1;
            ++count;
        }
    }
};