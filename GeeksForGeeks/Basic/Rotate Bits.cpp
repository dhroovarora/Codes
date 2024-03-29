https://practice.geeksforgeeks.org/problems/rotate-bits4524/1




class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d = d % 16;
            int right = (n >> d) + (((1 << d) - 1) & n ) * (1 << (16 - d));
            int left = ((n << d) + ((n << d) >> 16)) & ((1 << 16) - 1);
            
            return {left, right};
        }
};