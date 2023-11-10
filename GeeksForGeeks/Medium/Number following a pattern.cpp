https://www.geeksforgeeks.org/problems/number-following-a-pattern3126/1




class Solution{
    public:
    string printMinNumberForPattern(string S){
        // code here
        int n = S.size();
        string ans = "";
        int a = 1;
        set<int> s;
        int d = 0;
        for(int i=0;i<n;++i){
            while(s.find(a) != s.end()){
                    ++a;
            }
            if(S[i] == 'I'){
                while(d){
                    int p = d + a;
                    ans += to_string(p);
                    s.insert(p);
                    --d;
                }
                ans += to_string(a);
                s.insert(a);
                ++a;
            }
            else{
                ++d;
            }
        }
        while(d){
            int p = d + a;
            ans += to_string(p);
            --d;
        }
        while(s.find(a) != s.end()){
            ++a;
        }
        ans += to_string(a);
        return ans;
    }
};