https://www.codingninjas.com/codestudio/problems/maximum-product-subarray_1115474?topList=striver-sde-sheet-problems




int maximumProduct(vector<int> &a, int n)
{
	// Write your code here
    int max_p = 1;
    int min_p = 1;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
		if(a[i] >= 0){
            max_p = max(max_p * a[i],a[i]);
            min_p = min(a[i],min_p*a[i]);
        }
        else{
            int temp = max_p;
            max_p = max((min_p * a[i]),a[i]);
            min_p = min(a[i] * temp,a[i]);
        }
        maxi = max(maxi,max_p);
    }
    return maxi;
}