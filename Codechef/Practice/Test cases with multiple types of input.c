https://www.codechef.com/learn/course/c-beginner-v2-p1/BC01BC02_V2/problems/GSCP11




// Update the blanks below to solve the problem'
#include <stdio.h>

int main() {
    int t;
    int A,B;
    char C[30];
    int i = 1;
    scanf("%d", &t );
    while(i <= t) {
        scanf("%d %d", &A, &B );
        scanf("%ls", &C);
        printf("%d %d %ls \n", A,B,C );
        i = i+1;
    }
    
}