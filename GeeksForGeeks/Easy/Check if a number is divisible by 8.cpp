https://www.geeksforgeeks.org/problems/check-if-a-number-is-divisible-by-83957/1




class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int n = s.size();
        int a = s[n-1];
        if(n>1)
            a = (s[n-2]*10) + a;
        if(n>2)
            a = (s[n-3]*100) + a;
        if(a%8)
            return -1;
        return 1;
    }
};