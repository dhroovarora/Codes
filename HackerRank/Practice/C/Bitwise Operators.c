https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int x = 0;
    int y = 0;
    int z = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if((i&j)>x && (i&j)<k)
            {
                x = i&j;
            }
            if((i|j)>y && (i|j)<k)
            {
                y = i|j;
            }
            if((i^j)>z && (i^j)<k)
            {
                z = i^j;
            }
        }
    }
    printf("%d\n%d\n%d",x,y,z);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}