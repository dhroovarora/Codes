https://www.geeksforgeeks.org/problems/summed-matrix5834/1




class Solution {
    static long sumMatrix(long n, long q) {
        
        long count=n-Math.abs(n+1-q);
        if(count<0) count=0;
        return count;
    }
}