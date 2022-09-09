https://leetcode.com/problems/day-of-the-year/




class Solution {
public:
    int dayOfYear(string date) {
        int l = (date[5] - '0')*10 + (date[6] - '0');
        int s = (date[2] - '0')*10 + (date[3] - '0');
        int ans = 0;
        int p;
        if(s%4!=0 || (date[0] == '1' &&  date[1] == '9' && s==0)){
            p = 28;
        }
        else{
            p = 29;
        }
        switch (l){
            case 1:
                ans += 0;
                break;
            case 2:
                ans += 31 ;
                break;
            case 3:
                ans += 31 + p ;
                break;
            case 4:
                ans += 31 + p + 31 ;
                break;
            case 5:
                ans += 31 + p + 31 + 30 ;
                break;
            case 6:
                ans += 31 + p + 31 + 30 + 31 ;
                break;
            case 7:
                ans += 31 + p + 31 + 30 + 31 + 30 ;
                break;
            case 8:
                ans += 31 + p + 31 + 30 + 31 + 30 + 31 ;
                break;
            case 9:
                ans += 31 + p + 31 + 30 + 31 + 30 + 31 + 31 ;
                break;
            case 10:
                ans += 31 + p + 31 + 30 + 31 + 30 + 31 + 31 + 30 ;
                break;
            case 11:
                ans += 31 + p + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 ;
                break;
            case 12:
                ans += 31 + p + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 ;
                break;
        }
        ans += (date[8] - '0')*10 + (date[9] - '0');
        return ans;
    }
};