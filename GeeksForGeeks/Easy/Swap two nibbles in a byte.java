https://www.geeksforgeeks.org/problems/swap-two-nibbles-in-a-byte0446/1




class Solution {
    static int swapNibbles(int n) {
        // code here
        return (n>>4)|((n&15)<<4);
    }
}