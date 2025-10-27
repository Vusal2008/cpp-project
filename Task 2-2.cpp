#include <iostream>
using namespace std;	
int main() {
	int a;
	cout << "bir eded daxil edin:";
	cin >> a;
	if (a>0)
		cout << "eded musbetdir";
	else if (a<0)
		cout << "eded menfidir";
	else
		cout << "eded sifirdir";
}