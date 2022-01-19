#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n ,temp, a[3000];
    float q=0;
    cin>>n;
    for ( int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for ( int i=0;i<n;i++)
    {
        q = q + a[i];
    }
    q = q/n;
    cout<<q<<endl;
    // median
    for (int i = 0; i<n-1; i++)
    {
        for(int j=i+1 ; j<n; j++)
        {
            if ( a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if ( n%2==0)
    {
      cout<<float(a[(n-2)/2] + a[n/2])/2<<endl;
    }
    else if ( n%2 !=0)
    {
        cout<<float(a[((n+1)/2)]/2)<<endl;
    }

    int number = a[0];
    int mode = number;
    int count = 1;
    int countMode = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == number)
        { // count occurrences of the current number
            ++count;
        }
        else
        { // now this is a different number
            if (count > countMode)
            {
                countMode = count; // mode is the biggest ocurrences
                mode = number;
            }
            count = 1; // reset count for the new number
            number = a[i];
        }
    }

    cout << mode << endl;
    return 0;
}
