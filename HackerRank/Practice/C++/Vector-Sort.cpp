https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements
    // using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int>v;
    int size = v.size();
    int N,a;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>a;
        v.push_back(a);
    } 
    sort(v.begin(),v.end());
    cout << v;
    return 0;
}