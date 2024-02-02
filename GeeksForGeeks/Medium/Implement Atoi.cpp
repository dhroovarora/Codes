https://www.geeksforgeeks.org/problems/implement-atoi/1




//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int i=0;
        if(str[0] == '-'){
            i = 1;
        }
        int sum=0;
        for(;i<str.size();i++){
            if(str[i] >47 && str[i] < 58){
                sum = sum*10 + (str[i] - '0');
            }
            else
                return -1;
        }
        if(str[0] == '-'){
            return (-1)*sum;
        }
        return sum;
    }
};