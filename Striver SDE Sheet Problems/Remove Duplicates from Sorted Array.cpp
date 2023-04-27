https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_1102307?topList=striver-sde-sheet-problems&leftPanelTab=0




int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=1;
	while(i<arr.size()){
		if(arr[i] == arr[i-1]){
			arr.erase(arr.begin() + i);
		}
		else
			i++;
	}
	return arr.size();
}