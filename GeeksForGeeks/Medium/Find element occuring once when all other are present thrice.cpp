https://www.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1




class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        unordered_map<int, int> mp;
        for(int i=0; i<N; i++)
            ++mp[arr[i]];
        
        for(auto it: mp)
            if(it.second == 1)
                return it.first;
    }
};