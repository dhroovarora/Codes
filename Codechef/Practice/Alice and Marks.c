https://www.codechef.com/practice/course/c/PCL03/problems/MARKSTW?tab=statement




#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    // Your code goes here (if needed)
    if(x >= 2*y)
        printf("Yes");
    else
        printf("No");
}