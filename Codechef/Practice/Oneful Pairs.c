https://www.codechef.com/practice/course/c/PCL03/problems/ONEFULPAIRS?tab=statement




#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Your code goes here (if needed)
    if(a+b+a*b == 111)
        printf("Yes");
    else
        printf("No");
    return 0;
}