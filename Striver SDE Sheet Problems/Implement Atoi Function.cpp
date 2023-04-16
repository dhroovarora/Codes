https://www.codingninjas.com/codestudio/problems/atoi_981270?topList=striver-sde-sheet-problems




#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    int p = 1;
    int ans = 0;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i] >= '0' && str[i] <= '9'){
            ans += (str[i] - '0')*p;
            p *= 10;
        }
    }
    if(str[0] == '-')
        return (-1)*ans;
    return ans;
}