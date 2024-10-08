https://www.geeksforgeeks.org/problems/pair-sum--120604/1




class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int a=0,b=0;
        for(int i:arr){
            if(i>a)
                b=a,a=i;
            else if(i>b && i!=a)
                b=i;
        }
        return a+b;
    }
};