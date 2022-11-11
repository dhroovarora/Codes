https://practice.geeksforgeeks.org/problems/elements-in-the-range2834/1?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions




	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		unordered_map<int,int> m;
		for(int i=0;i<n;i++)
		    m[arr[i]]++;
		for(int i=A;i<=B;i++){
		    if(m[i] == 0){
		        return 0;
		    }
		}
		return 1;
	}


		 

};
	