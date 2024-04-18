https://www.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1




class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int a[], int n) {
        vector<int>v(n+2),ans;
        for(int i=0;i<n+2;i++){
           if(v[a[i]])ans.push_back(a[i]);
           v[a[i]]=1;
        }
        return ans;
    }
};