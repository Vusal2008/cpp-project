#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "a-ya reqem daxil edin: ";
	cin >> a;
	cout << "b-ye reqem daxil edin: ";
	cin>> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a=" << a << "\n" << "b="<< b;
	return 0;
}