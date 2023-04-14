https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true




#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long int b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<fixed;
    cout << setprecision(3) << d << endl;
    cout<<fixed;
    cout << setprecision(9) << e;
    return 0;
    
}