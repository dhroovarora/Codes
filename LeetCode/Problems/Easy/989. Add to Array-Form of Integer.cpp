https://leetcode.com/problems/add-to-array-form-of-integer/description/




class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int c = 0;
        for(int i=num.size() - 1;i>=0;i--){
            if(num[i] + c + (k%10) > 9){
                num[i] += c + (k%10) - 10;
                c = 1;
                k /= 10;
            }
            else{
                num[i] += c + (k%10);
                c = 0;
                k /= 10;
            }
        }
        while(k){
            if(c + k%10 > 9)
                num.insert(num.begin(),c + k%10 - 10);
            else{
                num.insert(num.begin(),c + k%10);
                c = 0;
            }
            k /= 10;
        }
        if(c){
            num.insert(num.begin(),1);
        }
        return num;
    }
};