https://www.codechef.com/problems/THREEAPFREE




#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
        for(int i=0; i<t; i++){
            int n;
            cin>>n;
            int a[n];
            for(int i=0; i<n; i++)
                cin>>a[i];
            int m=0;
            for(int i=0; i<n-2; i++)
                for(int j=i+1; j<n-1; j++)
                    for (int k=j+1; k<n; k++)
                        if(a[j]-a[i]==a[k]-a[j]){
                            m++;
                            break;
                        }
            (m) ? cout << "No" : cout<<"Yes";
            cout << endl;
        }
    

return 0;
}