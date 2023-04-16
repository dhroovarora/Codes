https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
  // Write your code here.
  long ans = 1;
  while(n){
    if (n & 1) 
      ans = (1LL * ans * (x) % m)%m;
	x = (1LL * (x) % m * (x) % m)%m;
	n >>= 1;
  	}
    return ans;
}