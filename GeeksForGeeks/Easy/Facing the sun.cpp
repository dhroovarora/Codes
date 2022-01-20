class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) {
	    // code here
	    int a = h[0],q=1;
	    for(int i=1;i<n;i++){
	        if(h[i] > a){
	            q++;
	            a = h[i];
	        }
	    }
	    return q;
	}
};
