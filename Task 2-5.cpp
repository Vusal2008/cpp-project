#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "imtahan balini daxil edin: ";
	cin >> n;
	if (n >= 91 && n <= 100) {
		cout << "A" << endl;
	}
	else if (n >= 81 && n <= 90) {
		cout << "B" << endl;
	}
	else if (n >= 71 && n <= 80) {
		cout << "C" << endl;
	}
	else if (n >= 61 && n <= 70) {
		cout << "D" << endl;
	}
	else if (n >= 51 && n <= 60) {
		cout << "E" << endl;
	}
	else if (n >= 0 && n <= 50) {
		cout << "F" << endl;
	}
	else {
		cout << "Yanlis bal daxil etdiniz!" << endl;
	}
}