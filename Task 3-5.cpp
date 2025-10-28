#include <iostream>
using namespace std;
int main() {
	int a,b=0,i=0;
	cin >> a;
	while (a > 0) {
		i = a % 10;
		b = b + i;
		a = a / 10;
	}
	cout << b;
	return 0;
}