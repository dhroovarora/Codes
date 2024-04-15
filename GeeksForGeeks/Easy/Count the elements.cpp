https://www.geeksforgeeks.org/problems/count-the-elements1529/1




class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,int q) {
        vector<int> res;
        sort(b.begin() , b.end());
        for(auto idx : query){
            int eleA = a[idx];
            int count = upper_bound(b.begin() , b.end() , eleA) - b.begin();
            res.push_back(count);
        }
        return res;
    }
};