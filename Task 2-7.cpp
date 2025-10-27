#include <iostream>
using namespace std;
int main() {
	double a, b;
	int c;
	cout << "iki eded daxil edin: ";
	cin >> a >> b;
	cout << "emeliyyat secin:\n1. Toplama\n2. Cixma\n3. Vurma\n4. Bolme\n";
	cin >> c;
	switch (c) {
	case 1:
		cout << "netice:" << a + b << endl;
		break;
	case 2:
		cout << "netice:" << a - b << endl;
		break;
	case 3:
		cout << "netice :" << a * b << endl;
		break;
	case 4:
		if (b != 0)
			cout << "netice:" << a / b << endl;
		else
			cout << "sifira bolmek yoxdur" << endl;
		break;
	default:
		cout << "sehv emeliyyat secdiniz" << endl;
		return 0;
	}
	return 0;
}