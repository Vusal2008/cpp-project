#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int a = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				a += 1;
			}
		}
		if (a == 0) {
			cout << i << endl;
		}
	}
	return 0;
}