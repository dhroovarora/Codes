https://www.geeksforgeeks.org/problems/shuffle-integers2401/1




class Solution{
	
	
	
	public:
	const int mx = 1e4;
    void shuffleArray(int arr[],int n)
    {
        int start = 1,end = n/2;
        for(int i=1;i<n;i++){
            if((i&1)==1){//odd
                arr[i] = (arr[end++] % mx)* mx + (arr[i] % mx);
            }else{
                arr[i] = (arr[start++] % mx)* mx + (arr[i] % mx);
            }
        }
        for(int i=1;i<n;++i)
            arr[i] /= mx;
    }
		 

};