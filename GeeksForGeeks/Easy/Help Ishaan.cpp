https://practice.geeksforgeeks.org/problems/help-ishaan5837/1




	public:
	    bool isprime(int N){
	        
	        if(N <= 1){
	            return 0;
	        }
	        for(int i = 2;i*i<=N;i++){
	            if(N%i==0){
	                return 0;
	            }
	        }
	        return 1;
	    }
		int NthTerm(int N){
		    // Code here
		    if(isprime(N)){
		        return 0;
		    }
		    int i;
		    for(i=1;i<N;i++){
		        if(isprime(N+i)){
		            return i;
		        }
		        if(isprime(N-i)){
		            return i;
		        }
		    }
		}

};