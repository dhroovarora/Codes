https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true




#include <stdio.h>
#include <iostream>
using namespace std;

int temp;

void update(int *a,int *b) {
    // Complete this function   
    temp = *a ;
    *a = *a + *b;
    *b = abs(*b - temp) ;
}

int main() {
    int a,b ;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;
    return 0;
}