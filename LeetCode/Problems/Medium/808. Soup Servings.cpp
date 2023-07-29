https://leetcode.com/problems/soup-servings/description/




class Solution {
public:
    map<pair<double , double> , double> mp;
    double recur(int a , int b){
        if(a <= 0 && b <= 0) return 0.5;
        if(a <= 0 && b > 0) return 1.0;
        if(a > 0 && b <= 0) return 0.0;
        if(mp.find({a , b}) != mp.end())
            return mp[{a , b}];
        double op1 = recur(a - 4 , b);
        double op2 = recur(a - 3 , b - 1);
        double op3 = recur(a - 2 , b - 2);
        double op4 = recur(a - 1 , b - 3);
        
        return mp[{a , b}] = 0.25 * (op1 + op2 + op3 + op4);
    }
    double soupServings(int n) {
        if(n > 4451) return 1.0;
        n = (n+24) / 25;
        double ans = recur(n , n);
        return ans;
    }
};