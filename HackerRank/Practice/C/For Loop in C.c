https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(int n=a;n<=b;n++){
    if(n == 1)
    {
        printf("one");
    }
    else if(n==2)
    {
        printf("two");
    }
    else if(n==3)
    {
        printf("three");
    }
    else if(n==4)
    {
        printf("four");
    }
    else if(n==5)
    {
        printf("five");
    }
    else if(n==6)
    {
        printf("six");
    }
    else if(n==7)
    {
        printf("seven");
    }
    else if(n==8)
    {
        printf("eight");
    }
    else if(n==9)
    {
        printf("nine");
    }
    else
    {
        if(n%2){
            printf("odd");
        }
        else{
            printf("even");
        }
    }
    printf("\n");
    }
    return 0;
}