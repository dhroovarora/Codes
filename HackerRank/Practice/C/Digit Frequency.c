https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1000];
    int var[10] = {0};
    scanf("%1000s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (48 <= str[i] && str[i] <= 57) {
            var[str[i] - 48]++;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", var[i]);
    }    
    return 0;
}