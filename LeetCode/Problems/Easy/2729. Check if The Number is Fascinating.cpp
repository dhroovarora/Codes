https://leetcode.com/problems/check-if-the-number-is-fascinating/




class Solution {
public:
    bool isFascinating(int n) {
        int arr[10] = {0};
        int a = 2 * n;
        int b = 3 * n;
        while(n){
            int q = n%10;
            arr[q]++;
            n /= 10;
        }
        while(a){
            int q = a%10;
            arr[q]++;
            a /= 10;
        }
        while(b){
            int q = b%10;
            arr[q]++;
            b /= 10;
        }
        if(arr[0])
            return 0;
        for(int i=1;i<10;i++)
            if(arr[i] > 1)
                return 0;
        return 1;
    }
};