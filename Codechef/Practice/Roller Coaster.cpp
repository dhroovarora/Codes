https://www.codechef.com/practice/PCPP07/problems/CPPCC07




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t>0){
	    int a,b;
	    std::cin >> a>>b;
	    if(a >=b)
	        std::cout << "YES" << std::endl;
	    else
	        std::cout << "NO" << std::endl;
	    t--;
	}
	return 0;
}