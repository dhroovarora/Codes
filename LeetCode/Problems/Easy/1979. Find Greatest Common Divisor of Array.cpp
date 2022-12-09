https://leetcode.com/problems/find-greatest-common-divisor-of-array/




class Solution {
public:
    int gcd(int a,int b){
        if(b!=0){
            return gcd(b,a%b);
        }
        return a;
    }
    int findGCD(vector<int>& arr) {
        
        return gcd(*min_element (arr.begin(),arr.end()),*max_element (arr.begin(),arr.end()));
    }
};