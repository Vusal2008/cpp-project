#include <iostream>
using namespace std;
int main() {
	int n, f = 1;
	cout << "bir eded daxil edin: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		f = i * f;
	}
	cout << n << "! = " << f << endl;
	return 0;
}