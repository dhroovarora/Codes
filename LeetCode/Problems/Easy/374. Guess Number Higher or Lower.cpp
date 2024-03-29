https://leetcode.com/problems/guess-number-higher-or-lower/




/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=0,h=n;
        while(l<h){
            int mid = l + (h-l)/2;
            if(guess(mid) == 1)
                l = mid +1;
            else
                h = mid;
        }
        return l;
    }
};