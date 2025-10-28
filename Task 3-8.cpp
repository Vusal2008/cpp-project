#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string a,b="";
	cin >> a;
	for (int i = static_cast<int>(a.length()) - 1; i >= 0; --i) {
		b = b + a[i];
	}
	cout << b << endl;
	return 0;
}
