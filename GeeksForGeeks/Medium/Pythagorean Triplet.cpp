https://www.geeksforgeeks.org/problems/pythagorean-triplet3018/1




class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    unordered_map <int, int> mp;
	    for (int i = 0; i < n; i++){
	        arr[i] = arr[i] * arr[i];
	        mp[arr[i]]++;
	    }
	    
	    
	    for (int i = 0; i < n; i++)
	    {
	        for (int j = i + 1; j < n; j++)
	        {
	            int sum = 0;
	            sum += arr[i] + arr[j];
	            if (mp.find(sum) != mp.end())
	            {
	                return true;
	            }
	        }
	    }
	    
	    return false;
	    
	}
};