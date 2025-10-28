#include <iostream>
using namespace std;
int main() {
	int a,b=0;
	while (cin >> a) {
		if (a== 0) {
			break;
	}
		else {
			b += a;
}
		}
	cout << b << endl;
	return 0;
}
