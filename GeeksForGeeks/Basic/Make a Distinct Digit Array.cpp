https://practice.geeksforgeeks.org/problems/make-a-distinct-digit-array2007/1





class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){
   	    // Code here
   	    vector<int> ans(10,0);
   	    for(auto it : nums){
   	        while(it){
   	            ++ans[it%10];
   	            it /= 10;
   	        }
   	    }
   	    vector<int> dhroov;
   	    for(int i=0;i<10;i++){
   	        if(ans[i])
   	            dhroov.push_back(i);
   	    }
   	    return dhroov;
   	}    
};