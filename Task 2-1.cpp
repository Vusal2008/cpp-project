#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "iki eded daxi edin:";
	cin >> a >> b;
	if (a > b)
		cout << a << " boyukdur " << endl;
	else if (b > a)
		cout << b << " boyukdur " << endl;
	else
		cout << "ededler beraberdir" << endl;
	return 0;
}