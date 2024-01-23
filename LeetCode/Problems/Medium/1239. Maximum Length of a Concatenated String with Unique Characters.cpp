https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/description/?envType=daily-question&envId=2024-01-23





class Solution {
public:
    int maxi(int a,int b){
        if(a > b)
            return a;
        return b;
    }
    void helper(vector<string> &arr,string temp,int &ans,int i){
        set<char> s;
        for(auto it : temp){
            if(s.size() && s.find(it) != s.end()){
                return;
            }
            s.insert(it);
        }
        ans = maxi(ans,temp.size());
        if(i == arr.size()){
            return;
        }
        helper(arr,temp,ans,i+1);
        helper(arr,temp + arr[i],ans,i+1);
    }
    int maxLength(vector<string>& arr) {
        int ans = 0;
        helper(arr,"",ans,0);
        return ans;
    }
};