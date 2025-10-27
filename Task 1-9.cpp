#include <iostream>
using namespace std;
int main() {
	int saniye, dq, saat;
	cout << "saniyeni daxil edin: ";
	cin >> saniye;
	saat = saniye / 3600;
	saniye = saniye % 3600;
	dq = saniye / 60;
	saniye = saniye % 60;
	cout << "saat: " << saat;
	cout << "deqiqe: " << dq;
	cout << "saniye: " << saniye;
	return 0;
}