#include <iostream>
using namespace std;
int main() {
	int ay;
	cout << "ay nomresini daxil edin (1-12): ";
	cin >> ay;
	switch (ay) {
	case 1:
	case 2:
	case 12:
		cout << "Qis fesli" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "Yaz fesli" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "Yay fesli" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "Payiz fesli" << endl;
		break;
	default:
		cout << "Daxil edilen ay nomresi yanlisdir!" << endl;
		break;
	}
	return 0;
}