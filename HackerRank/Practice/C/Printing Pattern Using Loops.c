https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main() 
{

    int n;
    scanf("%d", &n);
// Complete the code to print the pattern.
  int max1,max2,max3;
  int len=2*n-1;
  // logic for pattern
  for(int i=1;i<=len;i++){
      for(int j=1; j<=len; j++){
          max1=max(i,2*n-i);
          max2=max(j,2*n-j);
          max3=max(max1,max2);
          printf("%d ",(max3-n)+1);

      }
      printf("\n");

  }
return 0;
}