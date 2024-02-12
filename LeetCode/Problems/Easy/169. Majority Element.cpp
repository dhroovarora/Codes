https://leetcode.com/problems/majority-element/




class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int a=0;
        for(auto i : m){
            if(i.second > nums.size()/2){
                a = i.first;
                break;
            }
        }
        return a;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int candidate;
        for(int x:nums){
            if (c==0)
                candidate=x;
            c+=(x==candidate)?1:-1;
        }
        return candidate;
    }
};