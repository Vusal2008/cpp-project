#include <iostream>
using namespace std;
int  main() {
	int il;
	cout << "ili daxil edin:";
	cin >> il;
	if (il % 4 == 0 && il % 100 != 0 || il % 400 == 0){
		cout << "il artiq ildir." << endl;
	}
	else {
		cout << "il artiq il deyil." << endl;
	}
	return 0;
}