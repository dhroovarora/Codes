https://www.codechef.com/learn/course/c-beginner-v2-p1/BC01BC02_V2/problems/GSCP10




// Update the blanks below to solve the problem
#include <stdio.h>

int main() {
    int t;
    int A,B,C,D,E;
    int i = 1;
    scanf("%d", &t );
    while( i <= t) {
        scanf("%d %d", &A, &B );
        scanf("%d %d %d", &C, &D, &E );
        printf("%d %d %d %d %d ", A,B,C,D,E);
        i = i+1;
    }
  
}