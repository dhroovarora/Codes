https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i=1; i<1024; i++) {
        if(s[i] == ' ') {
            s[i] = '\n';
        }
    }
    
    printf("%s", s);
    
    return 0;
}