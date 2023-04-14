https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, sum = 0 ;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }
    printf("%d",sum);
    free(arr);
}