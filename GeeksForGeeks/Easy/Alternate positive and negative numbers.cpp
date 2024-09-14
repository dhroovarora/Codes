https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1




class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        int n = arr.size();
        int p[n];
	    int k[n];
	    int v = 0;
	    int l = 0;
	    for(int i=0;i<n;i++){
	        if(arr[i] >=0)
	            p[v++] = arr[i];
	        else
	            k[l++] = arr[i];
	    }
	    int q=0,w=0,e=0;
	    while(e<n){
	        
	        if(q<v)
	            arr[e++] = p[q++];
	        if(w<l)
	            arr[e++] = k[w++];
	    }
    }
};