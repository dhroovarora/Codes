https://leetcode.com/problems/third-maximum-number/




class Solution {
public:
    int thirdMax(vector<int>& a) {
        long max1 = LONG_MIN,max2 = LONG_MIN,max3=LONG_MIN;
        for(int i=0;i<a.size();i++){
            if(max1 == a[i] || max2 == a[i] || max3 == a[i]){
                continue;
            }
            if(max1<a[i]){
                if(max2<a[i]){
                    if(max3<a[i]){
                        max1 = max2;
                        max2 = max3;
                        max3 = a[i];
                    }
                    else{
                        max1 = max2;
                        max2 = a[i];
                    }
                }
                else{
                    max1 = a[i];
                }
            }
        }
        if(max1>LONG_MIN){
            return max1;
        }
        else{
            return max3;
        }
    }
};