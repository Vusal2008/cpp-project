#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double r, S,pi;
	pi = 3.14159;
	cout << "Dairenin sahesini hesablamaq ucun radius daxil edin: ";
	cin >> r;
	S = pi * pow(r, 2);
	cout << "Dairenin sahesi: " << S << endl;
	cout << "Cevrenin uzunlugu: " << 2 * pi * r << endl;
	return 0;
}