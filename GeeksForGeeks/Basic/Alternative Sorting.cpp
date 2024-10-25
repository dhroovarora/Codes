https://www.geeksforgeeks.org/problems/alternative-sorting1311/1




class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        int N = arr.size();
        sort(arr.begin(),arr.end());
	    vector<int> ans;
	    for(int i=0;i<N/2;i++){
	        ans.push_back(arr[N-i-1]);
	        ans.push_back(arr[i]);
	    }
	    if(N%2){
	        ans.push_back(arr[N/2]);
	    }
	    return ans;
    }
};