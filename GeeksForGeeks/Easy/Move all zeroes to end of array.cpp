https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1




class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    // code here
	    int i=0;
	    for(int j=0;j<n;j++){
	        if(a[j] != 0){
	            a[i] = a[j];
	            i++;
	        }
	        else{
	            continue;
	        }
	    }
	    for(int j=i;j<n;j++){
	        a[j] = 0;
	    }
	}
};