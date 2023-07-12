https://www.codechef.com/problems/CHEFSOCK




#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int jacketCost , sockCost , money;
	cin >> jacketCost >> sockCost >> money;
	money -= jacketCost;
	((money/sockCost)%2) ? cout << "Unlucky Chef" : cout << "Lucky Chef";
	cout << endl;
	return 0;
}