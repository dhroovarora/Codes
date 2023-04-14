https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m;
    float q,w;
	scanf("%d %d",&n,&m);
    scanf("%f %f",&q,&w);
    int a = n + m;
    int b = n - m;
    printf("%d %d\n%.1f %.1f",a,b,q+w,q-w);
    return 0;
}