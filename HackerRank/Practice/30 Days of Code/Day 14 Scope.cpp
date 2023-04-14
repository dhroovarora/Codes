https://www.hackerrank.com/challenges/30-scope/problem?isFullScreen=true






	// Add your code here
    Difference(vector<int> a){
        this->elements = a;
    }
    void computeDifference(){
        int smallest = 101,largest = 0;
        for(int i:elements){
            if(i < smallest)
                smallest = i;
            if(i > largest)
                largest = i;
        }
        this->maximumDifference = largest - smallest;
    }
